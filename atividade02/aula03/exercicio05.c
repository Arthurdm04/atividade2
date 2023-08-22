#include<stdio.h>

main(){
/*
Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.
*/

//variaveis
float custo, frete, despesa, valorBruto, valorVenda, lucro;

printf("\nDigite o custo do produto:");
scanf("%f",&custo);

printf("\nDigite o frete do produto:");
scanf("%f", &frete);

printf("\nDigite a despesa do produto:");
scanf("%f", &despesa);

//calcular o valor bruto do produto
//valor buto = custo + frete + despesa

valorBruto = custo + frete + despesa;

//informar o valor bruto para o usuario

printf("O valor bruto do produto e: R$%.2f. \nDigite o valor da venda: ", valorBruto);
scanf("%f", &valorVenda);

//calculo do lucro

lucro = ((valorVenda - valorBruto)*100)/valorBruto;

//apresentacao do lucro
printf("Sua porcentagem de lucro e: %.2f%%", lucro);



}