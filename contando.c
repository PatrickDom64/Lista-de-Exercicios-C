#include<stdio.h>
#include<stdlib.h>

main(){
	int num,cont=1;
	printf("digite um numero:");
	scanf("%d", &num);
	while (cont<=num){
	  printf("%d\n",cont );
	cont ++;
    }
    system("pause");
    return 0;
}

