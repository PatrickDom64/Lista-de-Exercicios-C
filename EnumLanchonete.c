/*
O cardápio de uma lanchonete é o seguinte:
Especificação       Código      Preço
Cachorro Quente     100         R$ 3,20
Bauru Simples       101         R$ 3,30
Bauru com ovo       102         R$ 3,50
Hamburguer          103         R$ 3,40
Cheeseburguer       104         R$ 4,00
Salgados            105         R$ 2,50
Refrigerante        106         R$ 3,00

Faça um programa que leia o código dos itens pedidos e as quantidades desejadas.
Calcule e mostre o valor a ser pago por item (preço * quantidade) e o total geral
do pedido. Considere que o cliente deve informar quando o pedido deve ser encerrado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int codigo, qtde;
    float valorItem, valorTotal;
    char resposta;

    valorTotal = 0;
    printf("\nEspecificacao     codigo      preco");
    printf("\nCachorro quente   100         R$3.20");
    printf("\nBauru             101         R$3.30");
    printf("\nBauru com ovo     102         R$3.50");
    printf("\Hamburger          103         R$3.40");
    printf("\nXburger           104         R$4.00");
    printf("\nSalgados          105         R$2.50");
    printf("\nRefrigerante      106         R$3.50");
    do
    {
     printf("\nEntre com o codigo desejado: ");
     scanf("%d", &codigo);
     printf("\nEntre com a quantidade do item escolhido: ");
     scanf("%d", &qtde);

     if (codigo ==100)
     {
         printf("\nCachorro quente:");
         valorItem = qtde * 3.20;
     }
     else if (codigo == 101)
     {
        printf("\nBauru quente:");
        valorItem = qtde * 3.30;
     }
     else if (codigo == 102)
     {
        printf("\nBauru com ovo quente:");
        valorItem = qtde * 3.30;
     }
          else if (codigo == 103)
     {
        printf("\nHamburger:");
        valorItem = qtde * 3.40;
     }
          else if (codigo == 104)
     {
        printf("\nXburger:");
        valorItem = qtde * 4.00;
     }
          else if (codigo == 105)
     {
        printf("\nSalgados:");
        valorItem = qtde * 2.50;
     }
          else if (codigo == 106)
     {
        printf("\nRefrigerante:");
        valorItem = qtde * 3.50;
     }
     printf("\nValor do item: %0.2f", valorItem);
     valorTotal += valorItem;
     printf("\nDeseja mais alguma coisa S ou N");
     scanf(" %c", resposta);

    //pode ser escrito dessa forma: }while(resposta = 'N' && resposta = 'n');
    }while(resposta != 'N' && resposta != 'n');
}
