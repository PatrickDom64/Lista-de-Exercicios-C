#include<stdlib.h>
#include<stdio.h>


int main(){
	//tabuleiro
	int tab[3][3];
	int jogador = 1;
	float i,j, soma, soma2;
	//jogador 1=O e -1=X
	//Troca de jogadores
		
		
		
		
	if(jogador == 1){
		jogador = -1;
	}else{
		jogador = 1
	}
	
	
	for(i>=0,i<=2,i++){
		soma = 0, soma2=0; 
		
	}for(j>=0,j<=2,j++){
		    soma = soma + tab[i][j];
		    
		    soma2 = soma2 + tab[j][i];
		    
	       } if(soma == -3 or soma2 == -3){ 
	            printf("Jogador X venceu\n");
		     } ifelse(soma == 3 or soma2 == 3){
		     	    printf("Jogador O venceu\n");
		            }
	
	
	return 0;	
}
