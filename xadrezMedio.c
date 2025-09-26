#include <stdio.h>
//funcoes de movimentacao das pecas

//torre: uma casa pra direita
void movimentacaoTorre(int casasTorre) {
  int contCasas = 0;
  while (casasTorre > contCasas) {
    printf("Direita\n");
    contCasas++;
  }
}
//bispo: uma casa pra cima, e outra pra direita
void movimentacaoBispo(int casasBispo) {
  for (int i = 0; casasBispo > i; i++) {
    printf("Cima, Direita\n");
  }
}
//rainha: uma casa pra esquerda
void movimentacaoRainha(int casasRainha) {
  int contCasas = 0;
  do {
    printf("Esquerda\n");
    contCasas++;
  } while (casasRainha > contCasas);
}
//cavalo: duas casas pra cima, uma pra direita
void movimentacaoCavalo(int casasBaixo, int casasEsquerda) { 

  for (int i = 0; casasBaixo > i; i++) {
    printf("Baixo\n");

    int j = 0;
    if (i == casasBaixo - 1) { //essa condicao garante com que o loop abaixo so execute apos o loop de for
      while (casasEsquerda > j) {
        printf("Esquerda\n");
        j++;
      }
    }
  }
}

int main() {
  int casasTorre = 5;
  printf("Movimentacao da torre:\n");
  movimentacaoTorre(casasTorre);

  printf("\n");

  int casasBispo = 5;
  printf("Movimentacao do bispo:\n");
  movimentacaoBispo(casasBispo);

  printf("\n");
  
  int casasRainha = 8;
  printf("Movimentacao da rainha:\n");
  movimentacaoRainha(casasRainha);

  printf("\n");
  
  int casasBaixo = 2;
  int casasEsquerda = 1;
  printf("Movimentacao do cavalo:\n");
  movimentacaoCavalo(casasBaixo, casasEsquerda);
}