class Tetromino {
  constructor(contexto, posicaoX, posicaoY) {
    this.ctx = contexto;
    this.x = posicaoX;
    this.y = posicaoY;
    this.tamanhoBloco = 25; // Alterado para refletir que é o tamanho de cada bloco
    this.cor = "red";
    this.estaGirado = false; // Melhorando a legibilidade com um nome mais descritivo
    this.tipoBloco = 0; // Reflete o tipo específico do bloco
  }



  desenharBlocoTipo1() {
    this.tipoBloco = 1;
    this.ctx.fillStyle = this.cor;
    this.ctx.fillRect(this.x, this.y, this.tamanhoBloco, this.tamanhoBloco);

    if (this.estaGirado) {
      this.ctx.fillRect(this.x + this.tamanhoBloco, this.y, this.tamanhoBloco, this.tamanhoBloco);
      this.ctx.fillRect(this.x + this.tamanhoBloco * 2, this.y, this.tamanhoBloco, this.tamanhoBloco);
      this.ctx.fillRect(this.x + this.tamanhoBloco * 3, this.y, this.tamanhoBloco, this.tamanhoBloco);
    } else {
      this.ctx.fillRect(this.x, this.y + this.tamanhoBloco, this.tamanhoBloco, this.tamanhoBloco);
      this.ctx.fillRect(this.x, this.y + this.tamanhoBloco * 2, this.tamanhoBloco, this.tamanhoBloco);
      this.ctx.fillRect(this.x, this.y + this.tamanhoBloco * 3, this.tamanhoBloco, this.tamanhoBloco);
    }
  }

  limparBloco() {
    switch (this.tipoBloco) {
      case 1:
        if (this.estaGirado) {
          this.ctx.clearRect(this.x, this.y, this.tamanhoBloco, this.tamanhoBloco);
          this.ctx.clearRect(this.x + this.tamanhoBloco, this.y, this.tamanhoBloco, this.tamanhoBloco);
          this.ctx.clearRect(this.x + this.tamanhoBloco * 2, this.y, this.tamanhoBloco, this.tamanhoBloco);
          this.ctx.clearRect(this.x + this.tamanhoBloco * 3, this.y, this.tamanhoBloco, this.tamanhoBloco);
        } else {
          this.ctx.clearRect(this.x, this.y, this.tamanhoBloco, this.tamanhoBloco);
          this.ctx.clearRect(this.x, this.y + this.tamanhoBloco, this.tamanhoBloco, this.tamanhoBloco);
          this.ctx.clearRect(this.x, this.y + this.tamanhoBloco * 2, this.tamanhoBloco, this.tamanhoBloco);
          this.ctx.clearRect(this.x, this.y + this.tamanhoBloco * 3, this.tamanhoBloco, this.tamanhoBloco);
        }
        break;
    }
  }

  moverParaEsquerda() {
    this.limparBloco();
    this.x -= this.tamanhoBloco;
    this.desenharBlocoTipo1();
  }

  moverParaDireita() {
    if(this.x > 250 && this.estaGirado == false)
    {
      return
    }
    if(this.x > 175 && this.estaGirado == true)
    {
      return
    }
    this.limparBloco();
    this.x += this.tamanhoBloco;
    this.desenharBlocoTipo1();
  }

  moverParaBaixo() {
    if(this.y > 475 && this.estaGirado == false)
    {
      return
    }
    if(this.y > 550 && this.estaGirado == true)
    {
      return
    }
    this.limparBloco();
    this.y += this.tamanhoBloco;
    this.desenharBlocoTipo1();
  }

  girar() {
    if(this.x > 200 && this.estaGirado == false)
    {
      return
    }
    if(this.y > 550 && this.estaGirado == true)
    this.limparBloco();
    this.estaGirado = !this.estaGirado;
    this.desenharBlocoTipo1();
  }

  sistemaDeColisao()
  {
   //criar sistema de colisao 
  }
}

const canvas = document.getElementById("tela");
const contextoCanvas = canvas.getContext("2d");

canvas.width = canvas.offsetWidth;
canvas.height = canvas.offsetHeight;

const tetromino = new Tetromino(contextoCanvas, 0, 0);
tetromino.desenharBlocoTipo1();

document.addEventListener('keydown', (event) => {
  switch (event.key) {
    case 'ArrowLeft':
      tetromino.moverParaEsquerda();
      console.log(tetromino.x)
      break;
    case 'ArrowRight':
      tetromino.moverParaDireita();
      console.log(tetromino.x)
      break;
    case 'ArrowUp':
      tetromino.girar();
      console.log(tetromino.estaGirado)
      break;
    case 'ArrowDown':
      tetromino.moverParaBaixo();
      console.log(tetromino.y)
      break;
  }
});
