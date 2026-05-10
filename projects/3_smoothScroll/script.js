chrome.storage.local.get(
  [window.location.hostname],
  (resultado) => {

    const ativado = resultado[window.location.hostname]

    if (ativado === false) {
      return
    }

    iniciarRolagemSuave()
  }
)

function iniciarRolagemSuave() {

  let posicaoAtual = window.scrollY
  let posicaoDestino = window.scrollY

  let animando = false

  const suavidade = 0.08
  const velocidade = 0.9

  window.addEventListener(
    "wheel",
    (evento) => {

      evento.preventDefault()

      posicaoDestino += evento.deltaY * velocidade

      if (posicaoDestino < 0) {
        posicaoDestino = 0
      }

      const alturaMaxima =
        document.documentElement.scrollHeight - window.innerHeight

      if (posicaoDestino > alturaMaxima) {
        posicaoDestino = alturaMaxima
      }

      if (!animando) {
        animarRolagem()
      }

    },
    { passive: false }
  )

  function animarRolagem() {

    animando = true

    posicaoAtual +=
      (posicaoDestino - posicaoAtual) * suavidade

    window.scrollTo(0, posicaoAtual)

    const diferenca =
      Math.abs(posicaoDestino - posicaoAtual)

    if (diferenca > 0.5) {
      requestAnimationFrame(animarRolagem)
    } else {
      animando = false
    }

  }

}