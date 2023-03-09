#include<stdio.h>
#include<stdlib.h>

main(){
	int senha, alfa;
	char n[50];
	
	printf("######################");
	printf("\nRegistro");
	printf("\nDiga seu Nome:");
	 scanf("%s", &n);
	printf("######################");
	printf("\nSeu nome :%s", &n);
	 
	printf("\nDigite sua senha:");
	 scanf("%d", &senha);
	printf("######################"); 
	 
	printf("\nQual e sua senha:");
	 scanf("%d",&alfa); 
	 
	if (senha == alfa){
	  printf("\nasseso aprovado \n");
	}else{
	printf("\n asseso negado \n"); 
	}
	
	system("pause");
	return 0;
}
