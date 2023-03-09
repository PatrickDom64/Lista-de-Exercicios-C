// Jogo da Velha matrizes  
#include<stdio.h>
#include<stdlib.h>

void tabuleiro(char casa[3][3]){
	    printf("\t %c | %c | %c  \n", casa[0][0],casa[0][1],casa[0][2]);
	    printf("\t---------------\n");
		printf("\t %c | %c | %c  \n", casa[1][0],casa[1][1],casa[1][2]);
		printf("\t---------------\n");
		printf("\t %c | %c | %c  \n", casa[2][0],casa[2][1],casa[2][2]);		
}
int main(){
	
	char casas[3][3];
	
	 char res;
	 int cont_jogadas, l, c;
	 //laso de repetição perguntano se o jogador quer jogar novamente
	 do{
	 	cont_jogadas = 1
	 	//ss
	 	do{
	 		printf("\nDigite a Linha:");
	 		 scanf("%i", &l);
	 		printf("\nDigite a Coluna:");
	 		 scanf("%i", &c);
	 		if(l<1 | l>3 | c<1 | c>3){
	 			  //printf("");
	 			  l = 0;
	 			  c = 0;
			 }elseif(casa[1-1]){
			 	
			 } 
	 		 
	 	  tabuleiro(casas);
		 }while(cont_jogadas <= 9);
	      
	      
		  printf("\nQuer jogar novamente? [S-N]:")
	      scanf("%s", &res); 	
	 }
	 while(res=='s'); 	
	
	return 0;
	system("pause");
}
