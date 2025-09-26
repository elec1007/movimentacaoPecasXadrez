#include <stdio.h>
//funcoes de movimentacao das pecas
void movimentacaoTorre(int casasTorre){
    int contCasas =0;
    while(casasTorre>contCasas){
        printf("Direita\n");
        contCasas++;
    }
}

void movimentacaoBispo(int casasBispo){
    for(int i=0;casasBispo>i;i++){
        printf("Cima, Direita\n");
    }
}

void movimentacaoRainha(int casasRainha){
    int contCasas =0;
    do {
        printf("Esquerda\n");
        contCasas++;
    }while (casasRainha>contCasas);

}


int main(){ 
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

}