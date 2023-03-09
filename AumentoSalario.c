/*
Um funcionário de uma empresa recebe aumento salarial anualmente.
Sabe-se que:
a) Esse funcionário foi contratado em 2005, com um determinado salário inicial;
b) Em 2006 recebeu aumento de 0,5% sobre o salário inicial;
c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam
a 50% a mais do porcentual anterior.

Faça um programa que determine o salário atual desse funcionário.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){

   float sal, novosal, percentual;
   int anoatual;
   
   printf("\nEntre com o salario inicial em 2005 do funcionario: "); 
   scanf("%f", &sal);
   percentual = 0.5 / 100;
   novosal = sal * percentual;
   printf("\nSalario em 2006: %0.2f", novosal); 
   printf("\nEntre com o ano atual: ");
   scanf("%d", &anoatual);
    for (i = 2007; i<= anoatual; i++)
	{
		percentual= percentual * 1.5;
		novosal = novosal 
	} 
}
