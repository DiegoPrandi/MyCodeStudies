const textoSite =
  document.getElementById("siteAtual")

const toggle =
  document.getElementById("toggleScroll")

chrome.tabs.query(
  { active: true, currentWindow: true },
  (abas) => {

    const abaAtual = abas[0]

    const hostname =
      new URL(abaAtual.url).hostname

    textoSite.textContent = hostname

    chrome.storage.local.get(
      [hostname],
      (resultado) => {

        const ativado = resultado[hostname]

        toggle.checked = ativado !== false
      }
    )

    toggle.addEventListener("change", () => {

      chrome.storage.local.set({
        [hostname]: toggle.checked
      })

    })

  }
)