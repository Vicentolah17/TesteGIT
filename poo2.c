#include <stdio.h>

int main(){
    int diasMES[30], i;
    float gastoDIA,despesasQuit,despesasQuitMes,gastoMES,gastoTOTAL;
    gastoTOTAL = 0;
    despesasQuit = 0;


    for(i=1; i<=30; i++){
    
    
    printf(" Qual foi o valor gasto hoje?\n")
    scanf("%f",&gastoDIA);
    printf("Qual o valor das despesas quitados hoje ?\n")
    scanf("%f", &despesasQuit);

    gastoMES = gastoDIA + gastoMES;
    despesasQuitMes= despesasQuitMes+ despesasQuit;
    }
    
    gastoTOTAL= gastoMES - despesasQuitMes;
    printf("o valor TOTAL gasto ate agora foi de: %f reais\n",&gastoTOTAL);
}