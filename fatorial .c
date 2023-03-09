#include<stdio.h>
#include<stdlib.h>

// calculando a fatorial 
// 3!= 3.2.1 
main(){
     //declarar variaveis 
	 int fatorial;
	 int resp= 1;
     //pedir dados para o usuario 
     printf("Fatorial\n");
     printf("Diga um numero:");
      scanf("%d", &fatorial);
      //loop
        for(; fatorial >=1 ; --fatorial){
    	    resp *= fatorial ;
	       }  
	  //Mostrar resultado   
     printf("? %d\n", resp );

system("pause");
return 0;
}
