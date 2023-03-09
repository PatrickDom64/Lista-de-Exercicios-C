#include<stdio.h>
#include<stdlib.h>
main(){
	int tabuada,contador=1;
	printf("digite um numero para calcular a tabuada:");
	scanf("%d/n", &tabuada);
	while (contador>=1 && contador <=10)
		printf("%02d x %02d = %02d\n",
		contador, tabuada,
		contador * tabuada);
		
	if(contador %10 == 0){
		system("pause");
	}
	contador++;	
}
