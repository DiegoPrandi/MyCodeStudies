const form = document.getElementById("employee-form");
const idInput = document.getElementById("employee-id");
const nameInput = document.getElementById("name");
const positionInput = document.getElementById("position");
const salaryInput = document.getElementById("salary");
const tableBody = document.getElementById("employee-table-body");
const messageEl = document.getElementById("message");
const formTitle = document.getElementById("form-title");
const submitBtn = document.getElementById("submit-btn");
const cancelEditBtn = document.getElementById("cancel-edit");
const refreshBtn = document.getElementById("refresh-btn");

const API_URL = "/employees";

function setMessage(text, type = "") {
  messageEl.textContent = text;
  messageEl.className = "message";
  if (type) {
    messageEl.classList.add(type);
  }
}

function resetForm() {
  form.reset();
  idInput.value = "";
  formTitle.textContent = "Novo funcionario";
  submitBtn.textContent = "Salvar";
  cancelEditBtn.classList.add("hidden");
}

function formatCurrency(value) {
  const salary = Number(value);
  if (Number.isNaN(salary)) return value;
  return salary.toLocaleString("pt-BR", { style: "currency", currency: "BRL" });
}

function rowTemplate(employee) {
  return `
    <tr>
      <td>${employee.id}</td>
      <td>${employee.name}</td>
      <td>${employee.position}</td>
      <td>${formatCurrency(employee.salary)}</td>
      <td>
        <div class="row-actions">
          <button
            class="secondary edit-btn"
            data-id="${employee.id}"
            data-name="${employee.name}"
            data-position="${employee.position}"
            data-salary="${employee.salary}"
          >
            Editar
          </button>
          <button class="secondary delete-btn" data-id="${employee.id}">Excluir</button>
        </div>
      </td>
    </tr>
  `;
}

async function fetchEmployees() {
  setMessage("");
  try {
    const response = await fetch(API_URL);
    if (!response.ok) throw new Error("Falha ao buscar funcionarios.");

    const employees = await response.json();

    if (!Array.isArray(employees) || employees.length === 0) {
      tableBody.innerHTML = `<tr><td colspan="5">Nenhum funcionario cadastrado.</td></tr>`;
      return;
    }

    tableBody.innerHTML = employees.map(rowTemplate).join("");
  } catch (error) {
    tableBody.innerHTML = `<tr><td colspan="5">Erro ao carregar dados.</td></tr>`;
    setMessage(error.message, "error");
  }
}

async function createEmployee(payload) {
  const response = await fetch(API_URL, {
    method: "POST",
    headers: { "Content-Type": "application/json" },
    body: JSON.stringify(payload),
  });

  if (!response.ok) {
    const errorData = await response.json().catch(() => ({}));
    throw new Error(errorData.erro || "Erro ao criar funcionario.");
  }
}

async function updateEmployee(id, payload) {
  const response = await fetch(`${API_URL}/${id}`, {
    method: "PUT",
    headers: { "Content-Type": "application/json" },
    body: JSON.stringify(payload),
  });

  if (!response.ok) {
    const errorData = await response.json().catch(() => ({}));
    throw new Error(errorData.erro || "Erro ao atualizar funcionario.");
  }
}

async function deleteEmployee(id) {
  const response = await fetch(`${API_URL}/${id}`, {
    method: "DELETE",
  });

  if (!response.ok) {
    const errorData = await response.json().catch(() => ({}));
    throw new Error(errorData.erro || "Erro ao excluir funcionario.");
  }
}

form.addEventListener("submit", async (event) => {
  event.preventDefault();
  setMessage("");

  const payload = {
    name: nameInput.value.trim(),
    position: positionInput.value.trim(),
    salary: Number(salaryInput.value),
  };

  if (!payload.name || !payload.position || Number.isNaN(payload.salary)) {
    setMessage("Preencha nome, cargo e salario corretamente.", "error");
    return;
  }

  try {
    if (idInput.value) {
      await updateEmployee(idInput.value, payload);
      setMessage("Funcionario atualizado com sucesso.", "success");
    } else {
      await createEmployee(payload);
      setMessage("Funcionario cadastrado com sucesso.", "success");
    }

    resetForm();
    await fetchEmployees();
  } catch (error) {
    setMessage(error.message, "error");
  }
});

tableBody.addEventListener("click", async (event) => {
  const target = event.target;
  const id = target.dataset.id;
  if (!id) return;

  if (target.classList.contains("edit-btn")) {
    idInput.value = id;
    nameInput.value = target.dataset.name || "";
    positionInput.value = target.dataset.position || "";
    salaryInput.value = target.dataset.salary || "";
    formTitle.textContent = "Editar funcionario";
    submitBtn.textContent = "Atualizar";
    cancelEditBtn.classList.remove("hidden");
    setMessage("Editando funcionario selecionado.");
    return;
  }

  if (target.classList.contains("delete-btn")) {
    const confirmed = window.confirm("Deseja realmente excluir este funcionario?");
    if (!confirmed) return;

    try {
      await deleteEmployee(id);
      setMessage("Funcionario excluido com sucesso.", "success");
      await fetchEmployees();
    } catch (error) {
      setMessage(error.message, "error");
    }
  }
});

cancelEditBtn.addEventListener("click", () => {
  resetForm();
  setMessage("Edicao cancelada.");
});

refreshBtn.addEventListener("click", fetchEmployees);

fetchEmployees();
