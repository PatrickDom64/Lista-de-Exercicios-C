#include<stdio.h>
#include<stdlib.h>

main(){
	//programa q tenha usuario e senha 
	//e q caucule o imc da pessoa
	//depois mostre o perfil dela com seu imc altura peso 
	//e dizer se estano ideal ou não 
	
	//printf("");
	//scanf("",&); 
	
	char user[30],s;
	int age, senha, peso;
	float imc,alt;
	
	//pefir senha
	//senha = 1234 
	//calc imc= peso/altura*altura
	
	    printf("Digite a senha: ");
	     scanf("%d",&senha);
	
    	if(senha==1234){
	
     	// Perguntar o nome e guardar a variavel
	     printf("\nDiga seu Nome: ");
	       scanf("%s",&user);
	       
	     printf("\nDiga seu sexo M(mulher), H(homem): ");
	       scanf("%s",&s); 
	
	     printf("\nDiga sua idade: ");
	       scanf("%d",&age);
 	       
         printf("\nDiga sua altura ex(1.76): ");
	       scanf("%d",&alt);	
           
         printf("\nDiga seu peso em kg ex(804): ");
	       scanf("%f",&peso);	
         
         imc=peso/(alt*alt);
         
           
         	        printf("Nome:%s",user);
         	        printf("\nIdade:%d",age);
         	        printf("\npeso:%f",peso);
         	        printf("\nAltura:%f",alt);
         	        printf("\nImc:%f",imc);
         	        printf("\nSexo:%s",s);
                       
                        if(imc<18.5){
                        	printf("Abaixo do peso");
						}else if(imc>=18.6 || imc<=24.9){
							printf("Normal");
						} else if(imc>=25.0 || imc<=29.9){
							printf("Sobre peso");
						} else if(imc>=30.0 || imc<=34.9){
							printf("Obesidade 1#Grau");
						} else if(imc>=35.0 || imc<=39.9){
							printf("Obesidade 2#Grau severa");
						} else if(imc>=40.0){
							printf("Obesidade 3#Grau morbida ");
						}				       	    
    }else{
    	printf("\nERRO");
    	printf("\nDigite novamente a senha.");
	}
	return 0;
	system("pause");
}
