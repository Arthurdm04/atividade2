#include<stdio.h>

main(){
/*
Dadas as medidas de uma sala, informe sua área.
*/
float largura, comprimento, area;

//enrada de dados
printf("Digitea largura:");
scanf("%f", &largura);

printf("Digiteo comprimento:");
scanf("%f", &comprimento);

//calcular a area
area = largura * comprimento;

//apresenta a saida
printf("A area da sala e: %.2fm2", area);






}