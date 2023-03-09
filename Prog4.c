/*
Escrever um programa em linguagem C que leia tr�s valores referentes �s medidas
dos lados de um tri�ngulo. Considerando lados como a, b e c. 
Verificar se os lados fornecidos formam realmente um tri�ngulo. Se esta condi��o
for verdadeira, deve ser indicado qual tipo de tri�ngulo foi formado, ou seja,
is�sceles, escaleno ou equil�tero.
Tri�ngulo � um pol�gono composto de tr�s lados onde cada lado � menor que a soma
dos outros dois lados. Esta � uma regra que obrigatorioamente deve ser considerada.
Assim, teremos um tri�ngulo se a<b+c, b<a+c e c<a+b. Se estas condi��es forem
verdadeiras, deveremos estabelecer qual tipo de tri�ngulo ser� formado:
Se todos os lados forem iguais, ou seja, a=b e b=c, teremos o tri�ngulo equil�tero.
Se dois lados forem iguais e um for diferente, teremos o tri�ngulo is�sceles, ou seja,
a=b ou b=c ou a=c. Se todos os lados forem diferentes, ent�o teremos o tri�ngulo
escaleno, ou seja, a != b, b!=c, e a!=c.
Ao final, calcule a �rea do tri�ngulo conforme sua especifica��o:

Equilatero:
Area=l^2*sqrt(3)/2

Is�sceles:
�rea = l*h/2

Escaleno:
S = (a+b+c)/2
k = S*(s-a)*(s-b)*(s-c), onde, s � o semiper�metro do tri�ngulo escaleno.
�rea=sqrt(k);

Algoritmo
---------
1. Entre com os tr�s valores. (estabelecer as vari�veis a, b e c.)
2. Verificar se os lados fornecidos formam realmente um tri�ngulo.
3. Se esta condi��o for verdadeira, deve ser indicado qual tipo de tri�ngulo 
foi formado, ou seja, is�sceles, escaleno ou equil�tero.
4. Se todos os lados forem iguais, tri�ngulo equil�tero. Calcule sua �rea.
5. Se dois lados forem iguais, tri�ngulo is�sceles. Calcule sua �rea.
6. Se todos os lados forem diferentes, tri�ngulo escaleno. Calcule sua �rea.
7. Exibir o c�lculo da �rea do tri�ngulo.
8. Caso os lados n�o formem um tri�ngulo, mostrar uma mensagem informando esta
condi��o.
*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(void){
	
	/*vareaveis*/
	float a, b, c, area, h, s, k;
	/*leitura das variaveis*/
	printf("\nInforme o lado A do triandulo:");
	scanf("%f", &a);
	
	printf("\nInforme o lado B do triandulo:");
	scanf("%f", &b);
	
	printf("\nInforme o lado C do triandulo:");
	scanf("%f", &c);
	
	/*Parte logica do algoritimo*/
    	
	if(a<b+c && b<c && c<b+a)
	{
	    if(a==b && b==c)
		{
			   //area do quadrado
	    	area=pow(a, 2) * sqrt(3)/2;
	    	printf("\nTriangulo equilatero\n");
		}
		else if (a==b || a==c)
		{
			printf("\nTriangulo Isosceles\n");
			printf("\nDigite o valor da altura");
			scanf("%f", &h);
			printf("\n");
			
			area=(b*h)/2;
		}
		else
		{
		printf("\nTriangulo Escaleno\n");
		s=(a+b+c/2);
		 k=(s*(s-a)*(s-b)*(s-c)); 
          area=sqrt(k);	
		} 
		printf("\nArea do triangulo= %0.2f\n", area);
          
	}
	else{
		printf("\n Os valores fornecidos nao formam um triangulo");
	}
	printf("\n pressione enter para encerrar o programa!");
	getch();
	return 0;
}

