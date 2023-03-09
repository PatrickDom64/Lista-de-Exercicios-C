#include<stdio.h>
#include<stdlib.h>

main(){

      int opcao, qtde;
      do {
      	printf("============ CARDAPIO ==============\n");
      	printf("=== 100 cachorro quente  R$5.00\n");
      	printf("=== 101 Bauru Simples    R$4.50\n");
      	printf("=== 102 Bauru com ovo    R$6.50\n");
      	printf("=== 103 Hamburguer       R$8.50\n");
      	printf("=== 104 X-burguer        R$10.00\n");
      	printf("=== 105 Suco             R$5.50\n");
      	printf("=== 106 Refrigerante     R$3.50\n");
      	printf("====================================\n");
        printf("Escolha uma opcao do cardapio" );
		printf("(ou 0 para sair).");    	
      	scanf("%d", &opcao);
      	
      	do{
      		print("informe a qtde consumida:");
      		scanf("%d", &qtde);
		  }while(qtde < 0);
		 switch(opcao){
		 	
			 case 100
			      printf("\n\n %d Cachorro quente= R$ %2f\n ",qtde, qtde*5.00);break; 
			 case 101
			      printf("\n\n %d Bauru Simples= R$ %2f\n ",  qtde, qtde*5.00);break; 
			 case 102
			      printf("\n\n %d Bauru com ovo= R$ %2f\n " , qtde, qtde*5.00);break;        
		 	 case 103
			      printf("\n\n %d Hamburguer = R$ %2f\n "   ,  qtde, qtde*5.00);break; 
			 case 104
			      printf("\n\n %d X-burguer= R$ %2f\n "     ,  qtde, qtde*5.00);break; 
		 	 case 105
			      printf("\n\n %d Suco = R$ %2f\n "         ,  qtde, qtde*5.00);break; 		 	
		 	 case 106
			      printf("\n\n %d Refrigerante= R$ %2f\n "  ,  qtde , qtde*5.00);break; 
		 	
			 default printf("\n\nOpcao invalida!");
		 }
		 system("pause");
		 system("cls"); 
	  }
     while(opcao >= 100 && opcao <= 106)
     
     printf("FIM DO PROGRAMA!!!");
}
