#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,c,d;
    printf("escreva os led's a serem ligados\n");
    printf("lembrando que 1=ligado 0=desligado\n");
    printf("**********Led-A******************\n");
    scanf("%d", &a);
    printf("**********Led-B******************\n");
    scanf("%d", &b);
    printf("**********Led-C******************\n");
    scanf("%d", &c);
    printf("**********Led-D******************\n");
	scanf("%d", &d);
	
	if(a==0&&b==0&&c==0&&d==0){
		printf("Led A desligado\n");
		printf("Led b desligado\n");
		printf("Led c desligado\n");
		printf("Led d desligado\n");
	}
	else{
	    printf("Led A ligado\n");
		printf("Led b ligado\n");
		printf("Led c ligado\n");
		printf("Led d ligado\n");
	}
	    system("pause");
	    return 0;
		
		}
