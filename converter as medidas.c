#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
  setlocale (LC_ALL,"");
    int opcao;
    float med1, resultado;
    
    do // inico do while
    {
        printf ("\n---Calculadora de convercao---\n");
        printf ("1 - Converter quilometros para milhas \n");
        printf ("2 - Converter Celsius para Fahrenheit \n");
        printf ("3 - Converter quilogramas para libras \n");
        printf ("4 - Converter metros para centímetros \n");
        printf ("0 - Sair\n");
        printf ("escolha uma opção:");
        scanf  ("%d",&opcao);
        
         switch (opcao){
            case 1:
            printf ("digite a medida em quilometros:");
            scanf ("%f", &med1);
            resultado = ( med1 * 0,621371 ) ;
            printf ("resultado: %2f\n", resultado);
            break;
             case 2:
            printf ("digite os graus celsius:");
            scanf ("%f", &med1);
            resultado = ( med1 * 1,8 + 32 );
            printf ("resultado: %2f\n", resultado);
            break;
             case 3:
            printf ("digite o numero em quilogramas:");
            scanf ("%f", &med1);
            resultado = (med1 * 2,205);
            printf ("resultado: %2f\n", resultado);
            break;
            case 4:
            printf ("digite a medida de metros:");
            scanf ("%f", &med1);
             resultado = (med1 * 100);
            printf ("resultado: %2f\n", resultado);
            break;
           case 0:
            printf ("Até logo...\n");
            break;
           default:
           printf ("opção invalida, Tente novamente");
        
        }
          printf ("\n Pressione Enter para continuar");
        getchar (); // Funciona com scanf
        getchar (); // Aguarda o enter 
        
        system("clear");
        
    }while (opcao !=0);
   
    return 0;
}
        