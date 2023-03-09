#include<stdio.h>
#include<stdlib.h>

main(){
	int a,b,c;
	float m;
	
	printf("Diga nota 1:");
	scanf("%d", &a);
	printf("\nDiga nota 2:");
	scanf("%d", &b);
	printf("\nDiga nota 3:");
	scanf("%d", &c);
	
	m=(a+b+c)/3;
	
	printf("\nMedia eh:%0.0f\n", m);
	
    if(m>=7){
    	printf("Parabens foi Aprovado!!!\n");
	}ifelse(m==6);{
		printf("Pode fazer a P3:\n");
	     }ifelse(m<6);{
	     	printf("Reprovado de vez:\n");
		 }
	
	system("pause");
	return 0;
}
