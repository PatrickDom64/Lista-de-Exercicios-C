//O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do
//distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor
//seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro,
//calcular e escrever o custo final ao consumidor.

//concluido 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	
	int inicial;
	char nome[20];
	float preco , precofinal; 
	
	printf("Diga o nome do carro:");
	 scanf("%s",&nome);
	printf("\nDigite o preco do carro:");
	 scanf("%d",&inicial);
	  
	preco = inicial+(inicial*0.28);
	 
	precofinal =preco+(preco*0.45);
	
	printf("\nNome do Automovel: %s", nome);  
	printf("\nPreco de fabrica do automovel: %d",inicial); 	 
	printf("\nPreco com os 28 por cento da distribuidora:%2.f",preco);	
	printf("\nPreco com os impostos sob automovel: %2.f",precofinal);

	
	return 0;
	system("pause");
}
