#include <stdio.h>
//funcoes que determinam a movimentacao das pecas, agora recursivas!

//torre: uma casa pra direita
void movimentacaoTorre(int casasTorre) {
     if(casasTorre<=0){
        return;
    }
    printf("Direita\n");
    movimentacaoTorre(casasTorre-1);
}
//rainha: uma casa pra esquerda
void movimentacaoRainha(int casasRainha) {
       if(casasRainha<=0){
        return;
    }
    printf("Esquerda\n");
    movimentacaoRainha(casasRainha-1);

}



//bispo: uma casa pra cima, e outra pra direita
void movimentacaoBispo(int casas) {
    for (int i = 0; i < casas; i++) {
        int j = 0;

        while (j < 1) { 
            printf("Cima, Direita\n");
            j++;
        }
    }
}

//cavalo: duas casas pra cima, uma pra direita
void movimentacaoCavalo(int casasVerticais, int casasHorizontais) {
    for (int i = 0; i < casasVerticais; i++) {
        printf("Cima\n");
        if (i < casasVerticais - 1) { //é verdade ate a ultima iteracao do loop, ai passa para o loop debaixo, que controla o movimento horizontal da peca
            continue;
        }

        for (int j = 0; j < casasHorizontais; j++) {
            printf("Direita\n");
            break;
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