/*
Escrever um programa em linguagem C que leia três valores referentes às medidas
dos lados de um triângulo. Considerando lados como a, b e c. 
Verificar se os lados fornecidos formam realmente um triângulo. Se esta condição
for verdadeira, deve ser indicado qual tipo de triângulo foi formado, ou seja,
isósceles, escaleno ou equilátero.
Triângulo é um polígono composto de três lados onde cada lado é menor que a soma
dos outros dois lados. Esta é uma regra que obrigatorioamente deve ser considerada.
Assim, teremos um triângulo se a<b+c, b<a+c e c<a+b. Se estas condições forem
verdadeiras, deveremos estabelecer qual tipo de triângulo será formado:
Se todos os lados forem iguais, ou seja, a=b e b=c, teremos o triângulo equilátero.
Se dois lados forem iguais e um for diferente, teremos o triângulo isósceles, ou seja,
a=b ou b=c ou a=c. Se todos os lados forem diferentes, então teremos o triângulo
escaleno, ou seja, a != b, b!=c, e a!=c.
Ao final, calcule a área do triângulo conforme sua especificação:

Equilatero:
Area=l^2*sqrt(3)/2

Isósceles:
Área = l*h/2

Escaleno:
S = (a+b+c)/2
k = S*(s-a)*(s-b)*(s-c), onde, s é o semiperímetro do triângulo escaleno.
Área=sqrt(k);

Algoritmo
---------
1. Entre com os três valores. (estabelecer as variáveis a, b e c.)
2. Verificar se os lados fornecidos formam realmente um triângulo.
3. Se esta condição for verdadeira, deve ser indicado qual tipo de triângulo 
foi formado, ou seja, isósceles, escaleno ou equilátero.
4. Se todos os lados forem iguais, triângulo equilátero. Calcule sua área.
5. Se dois lados forem iguais, triângulo isósceles. Calcule sua área.
6. Se todos os lados forem diferentes, triângulo escaleno. Calcule sua área.
7. Exibir o cálculo da área do triângulo.
8. Caso os lados não formem um triângulo, mostrar uma mensagem informando esta
condição.
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

