#include <stdio.h>
   
   //não funciona. odeio c e a minha vida . prefiro java :(
    //void dataInput( char entrada[20] ){
        //printf("%s \n", entrada );
        //scanf("%s", &)
   // }

int main(){
    int pupulacao = 0;
    int area = 0;
    int pib = 0;
    int turismoPontos = 0;

    printf("insira a população \n");
    scanf("%d", &pupulacao);
    printf("insira a area \n");
    scanf("%d", &area);

    printf("insira o pib \n");
    scanf("%d", &pib);

    printf("insira a quantidade de pontos turisticos \n");
    scanf("%d", &turismoPontos);


    printf("população: %d\n area: %d\n pib: %d\n pontos turísticos: %d\n ", pupulacao, area, pib, turismoPontos);

    return 0;
}