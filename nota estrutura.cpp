#include<stdio.h>
#include<stdlib.h>

main(){
	//Notas do 3_Semestre da Faculdade 
	
	float p1,p2,t1,nf;
    float pr1,pr2,tr1,tr2,notaf;
    //Estrutura de dados 
	printf("Nota Estrutura de Dados\n");
	//0.30*p1 + 0.30*p2 + 0.40*t1
	printf("Nota P1:");
	 scanf("%f", &p1);
	printf("Nota P2:");
	 scanf("%f", &p2);
	printf("Nota T1:");
	 scanf("%f", &t1);
	
	nf=(0.30*p1) + (0.30*p2) + (0.40*t1);
	
	if(nf >= 6){
		printf("\nNota Final:%.2f",nf);
		printf("\nAprovado!!!");
	}else{
		printf("\nNota Final:%.2f",nf);
		printf("\nreprovado");
	}
	//Engenharia de Software 
	//(0.2*T1 + 0.8*P1 + 0.4*T2 + 0.6*P2) / 2
	printf("\nEngenharia de Software\n");
	printf("Nota P1:");
	 scanf("%f", &pr1);
	printf("Nota P2:");
	 scanf("%f", &pr2);
	printf("Nota T1:");
	 scanf("%f", &tr1);
	printf("Nota T2:");
	 scanf("%f", &tr2);
	 
	
	notaf=((0.2*tr1)+(0.8*pr1)+(0.4*tr2)+(0.6*pr2))/ 2;
	
	if(notaf >= 6){
		printf("\nNota Final:%.2f",notaf);
		printf("\nAprovado!!!");
	}else{
		printf("\nNota Final:%.2f",notaf);
		printf("\nreprovado");
	}
	//Ingles
	//(P1+P2+TR)/2
    float prova1, prova2, to, resultado;
	printf("\nIngles III\n");
	printf("Nota P1:");
	 scanf("%f", &prova1);
	printf("Nota P2:");
	 scanf("%f", &prova2);
	printf("Nota T1:");
	 scanf("%f", &to);
	
	resultado= (prova1+prova2+to)/2;
	if(resultado >= 6){
		printf("\nNota Final:%.2f",resultado);
		printf("\nAprovado!!!");
	}else{
		printf("\nNota Final:%.2f",resultado);
		printf("\nreprovado");
	}
	return 0;
	system("pause");
}
