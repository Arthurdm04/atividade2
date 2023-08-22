#include<stdio.h>

main(){
/*
Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
*/

//variaveis
int anos, meses, dias, iaddeDias;
printf("Digite sua idade em anos, meses e dias:");
scanf("%d %d %D", &anos, &meses, &dias);

iaddeDias = (anos * 365) + (meses * 30) + (dias);

printf("Dias vividos: %d", iaddeDias);




}