#include <stdio.h>

int main () {

int num1, num2;
int soma, subtracao;
float multipicacao, divisao;

printf("Escreva dois numeros : ");
scanf ("%d",&num1 );
scanf ("%d",&num2 );

soma = num1 + num2;
subtracao = num1 - num2;
multipicacao = num1 * num2;
divisao = num1 / num2;

printf("A soma dos dois numeros eh : %d \n", soma);
printf("A subtracao dos dois numeros eh : %d \n", subtracao);
printf("A multipicacao dos dois numeros eh : %.2f \n", multipicacao );
printf("A divisao dos dois numeros eh : %.2f \n", divisao);

}
