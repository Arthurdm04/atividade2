#include<stdio.h>

main(){
    /*
    escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.
    */

   //variaveis

float salarioAtual, porcentagemReajuste, novoSalario, reajusteFinal;

printf("Digite o salario atual:");
scanf("%f", &salarioAtual);

printf("Digite a porcentagem de reajuste:");
scanf("%f", &porcentagemReajuste);

reajusteFinal = porcentagemReajuste/100;

//calcular o novo salario
novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

printf("Novo salario: %.2f", novoSalario);




}