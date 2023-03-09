/*
O cardápio de uma lanchonete é o seguinte:
Especificação       Código      Preço
Cachorro Quente     100         R$ 3,50
Bauru Simples       101         R$ 4,00
Bauru com ovo       102         R$ 5,00
Hamburguer          103         R$ 4,50
Cheeseburguer       104         R$ 5,50
Salgados            105         R$ 3,00
Refrigerante        106         R$ 3,50

Faça um programa que leia o código dos itens pedidos e as quantidades desejadas.
Calcule e mostre o valor a ser pago por item (preço * quantidade) e o total geral
do pedido. Considere que o cliente deve informar quando o pedido deve ser encerrado.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
	
	    int codigo, qtd;
    	float preco, total;
    	char resp;
	
    	total=0;
	  printf("/nDescricao            codigo          preco");
	  printf("/nHot-dog               100          R$ 3.50");
	  printf("/nBauru simples         101          R$ 4.00");
	  printf("/nBauru Ovo             102          R$ 5.00");
	  printf("/nHamburguer            103          R$ 4.50");
	  printf("/nCheeseburguer         104          R$ 5,50");
	  printf("/nSalgados              105          R$ 3,00");
	  printf("/nRefrigerante          106          R$ 3,50");
	  printf("/nEncerrar Programa  0/n");
	  do
	  {
			  printf("/nEntre com o codigo desejado: ");
		    	scanf("%d", &codigo);
		    	  printf("/nEntre com a quantidade do item: ");
	      		  scanf("%d", &qtd);
    	 }
    	while(resp |= 'N' && resp |='n')
 	if(codigo=100){
 		printf("\nHot-dog!");
	 }
	else if  (codigo=101){
	 printf("\nBauru simples!");	
	 }
	else if (codigo=102){
	 	printf("\nBauru Ovo!");
	 }
	else  if (codigo=103){
	 	printf("\nHamburguer!");
	 }
	else if  (codigo=104){
	 	printf("\nCheeseburguer !");
	 }
	 else if (codigo=105){
	 	printf("\nSalgados !");
	 }
	else  if (codigo=106){
	 	printf("\nRefrigerante !");
	 }
	else{
	 	printf("\Codigo Errado!");
	 }
	 
	printf("\nValor do Item", preco);
	total+=
	
	
	
	
	 
}








