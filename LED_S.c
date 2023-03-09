#include<stdio.h>
#include<stdlib.h>

main(){
     int a,b,c,d;
     printf("digite qual leds seriam ligados./n");
     
     printf("lembrando 1=ligar 0=desligar./n");
     
     printf("Led-A liga ou desliga./n");
     scanf("%d", &a);
     
     printf("Led-B liga ou desliga./n");
	 scanf("%d", &b);
	 
     printf("Led-C liga ou desliga./n");
	 scanf("%d", &c);
	 
     printf("Led-D liga ou desliga./n");
	 scanf("%d", &d);
	 
     switch(led){
     	case 1:(a==0&&b==0&&c==0&&d==0)
     		printf("todos desligados");
     		break;
     		
		case 2:(a==1&&b==0&&c==0&&d==0)
			printf("Led-A ligado e demais desligados");
     		break;
     		
     	case 3:(a==0&&b==1&&c==0&&d==0)
			printf("Led-B ligado e demais desligados");
     		break;
     		
		case 4:(a==0&&b==0&&c==1&&d==0)
			printf("Led-C ligado e demais desligados");
     		break;
			 	 
		case 5:(a==0&&b==0&&c==0&&d==1)
			printf("Led-D ligado e demais desligados");
     		break;
			 		
     	case 6:(a==1&&b==1&&c==0&&d==0)
			printf("Led-A e B ligado e demais desligados");
     		break;
     		
		case 7:(a==0&&b==1&&c==1&&d==0)
			printf("Led-C e B ligado e demais desligados");
     		break;
			 	 
		case 8:(a==0&&b==0&&c==1&&d==1)
			printf("Led-C e D ligado e demais desligados");
     		break;
			 	 	
     	case 9:(a==1&&b==1&&c==1&&d==0)
			printf("Led-A,B e D ligado e demais desligados");
     		break;
			 	
     	case 10:(a==0&&b==1&&c==1&&d==1)
			printf("Led-B,C e D ligado e demais desligados");
     		break;
			 	
     	case 11:(a==1&&b==1&&c==1&&d==1)
			printf("Todos estão ligados");
     		break;	
	 }
	 system(pause);
	 return 0;
      


}
