#include<stdio.h>

main(){

/*
Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números.
*/
//declaração dasvariaveis

int num1, num2, soma, mult;
float sub, div;

//entrada de dados

printf("Digite o primeiro numero:");
scanf("%d", &num1);

printf("Digite o segundo numero:");
scanf("%d", &num2);

//operações 

soma = num1 + num2;
mult = num1 * num2;
sub = (float)num1 - num2;
div = (float)num1 / num2;

//apresentação dos resultados

printf("\nSoma: %d", soma);
printf("\nMultiplicacao: %d", mult);
printf("\nSubtracao: %f", sub);
printf("\nDivisao: %f", div);


}