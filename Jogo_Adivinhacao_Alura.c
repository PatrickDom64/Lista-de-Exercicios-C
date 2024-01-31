#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//#define ATTEMPT 5
//short 2bytes
//int = 4bytes = 32bits  = 2^32
//long = 8bytes = 64bits = 2^64
//double = 8bytes
//float = 4bytes

int main(){

    int seg = time(0);
    srand(seg); 
    int random_number = rand();

    int usernamber;
    int securitytnumber = number % 100; 
    int win = 0;
    double points = 1000;

    //Aula alura Jogo Adivinhação

    printf("            P  /_\\  P                                \n");
    printf("          /_\\_|_|_/_\\                               \n");
    printf("       n_n | ||. .|| | n_n         Bem vindo ao       \n");
    printf("       |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!   \n");
    printf("      |" "  |  |_|  |"  " |                           \n");
    printf("      |_____| ' _ ' |_____|                           \n");
    printf("           \\__|_|__/                                 \n");

    int level;
        printf("Qual o nível de dificuldade?\n");
        printf("(1) Fácil (2) Médio (3) Difícil\n\n");
        printf("Escolha: ");
            scanf("%d", &level);

    int attempt;
        if(level == 1) {
            attempt = 20;
        }
        else if (level == 2) {
            attempt = 15;
        }
        else {
            attempt = 6;
        }

    int Right_namber = (usernamber == securitytnumber);
    int hight = (usernamber > securitytnumber);

    for(int i = 1; i <= attempt; i++){
        
        printf("Tentativa %d\n",i);
        printf("Digite o numero secreto:");
            scanf("%d",&usernamber);
        i++;

    //pensar mais tarde colocar um numero randomico
        
        if(usernamber < 0){
            printf("Você não pode escrever numeros negativos");
            continue;
        }

        if(Right_namber){
            break;
        }
        else if(hight){
            printf("Seu chute %d foi maior que o valor do numero secreto\n",usernamber);
        }
        else{
            printf("Seu chute %d foi menor que o valor do numero secreto\n",usernamber);
        }

        attempt ++;

            printf("O numero secreto é:%d",securitytnumber);
            printf("\nVoce errou o numero secreto NÃO é:%d",usernamber);
        double lost_points = abs(usernamber - securitytnumber) / (double)2;
        points = points - lost_points;    
    }

    printf("Fim de jogo!\n");

        if(Right_namber) {
            printf("Você ganhou!\n");
            printf("Você acertou em %d tentativas!\n", tentativas);
            printf("Total de pontos: %.1f\n", pontos);
        } else {
            printf("Você perdeu! Tente de novo!\n");
        }

    system("pause");
    return 0;
}