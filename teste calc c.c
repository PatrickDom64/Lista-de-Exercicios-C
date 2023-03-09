#include<stdio.h>
#include<stdlib.h>

main(){
	
	//calculadora 
	int x,y,z,r;
	
	printf("Qual a operação voce deseja fazer");
	printf("\n1- Soma");
	printf("\n2- Subtração");
	printf("\n3- Multiplicacao");
	printf("\n4- Divisão\n");
	 scanf("%d",&z);
	
	if(z=1){
		printf("Digite o primeiro numero:");
		 scanf("%d",&x);
		printf("Digite o segundo numero:");
		 scanf("%d",&y);
		 
		r=x+y; 
		 
		 printf("\nO resultado de sua soma foi:%d",r);
		 
	}if(z=2){
		printf("Digite o primeiro numero:");
		 scanf("%d",&x);
		printf("Digite o segundo numero:");
		 scanf("%d",&y);
		 
		r=x-y; 
		 
		 printf("\nO resultado de sua subtracao foi:%d",r);   
	}if(z=3){
		printf("Digite o primeiro numero:");
		 scanf("%d",&x);
		printf("Digite o segundo numero:");
		 scanf("%d",&y);
		 
		r=x*y; 
		 
		 printf("\nO resultado de sua multiplicacao foi:%d",r);
	}else{
		printf("Digite o primeiro numero:");
		 scanf("%d",&x);
		printf("Digite o segundo numero:");
		 scanf("%d",&y);
		 
		r=x/y;
		 
		 printf("\nO resultado de sua divisao foi:%d",r);
	}
	
	return 0;
	system("pause");
}
