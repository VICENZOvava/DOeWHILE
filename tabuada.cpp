#include<locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL,"");
    int tabuada,opcao,num1;
    do
    {
        printf("\n ---TABUADA--- \n");
        printf("1 - fazer tabuada\n");
        printf("0 - sair\n");
        printf("escolha uma das opçoes acima:\n");
        scanf("%d", &opcao);
       
  switch(opcao){
       case 1:
           printf("Digite um numero: \n");
           scanf("%d", &num1);
           printf("%d x 1 = %d\n", num1,tabuada = num1* 1);
           printf("%d x 2 = %d\n", num1,tabuada = num1 * 2);
           printf("%d x 3 = %d\n", num1,tabuada = num1 * 3);
           printf("%d x 4 = %d\n", num1,tabuada = num1 * 4);
           printf("%d x 5 = %d\n", num1,tabuada = num1 * 5);
           printf("%d x 6 = %d\n", num1,tabuada = num1 * 6);
           printf("%d x 7 = %d\n", num1,tabuada = num1 * 7);
           printf("%d x 8 = %d\n", num1,tabuada = num1 * 8);
           printf("%d x 9 = %d\n", num1,tabuada = num1* 9);
           printf("%d x 10 = %d\n", num1,tabuada = num1 * 10);
         break;
         
   case 0:
 printf("Obrigado!\n");
 break;
 default:
 printf("opção invalida!\n");
   }
       printf("\n enter para continuar");
        getchar(); //funciona como o scanf
        getchar(); //aguarda o enter do usuario
        system("clear");
       
return 0;
       
       
    }while(opcao ==0);
    return 0;
}