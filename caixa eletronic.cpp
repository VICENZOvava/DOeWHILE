#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
  setlocale (LC_ALL,"");
    int opcao;
    float acao1, dep, resultado;
    
    do // inico do while
    {
        printf ("\n---CAIXA ELETRONICO---\n");
        printf ("Digite o numero correspondente ao que deseja fazer \n");
        printf ("1 - Depositar dinheiro \n");
        printf ("2 - Sacar dinheiro \n");
        printf ("3 - Consultar saldo \n");
        printf ("0 - Sair \n");
        scanf  ("%d",&opcao);
        
        switch (opcao){
            case 1:
            printf ("digite o quanto voce deseja depositar:");
            scanf ("%f", &dep);
            resultado = 1000 + dep;
            printf ("ação feita com sucesso, o seu saldo é de: %10f\n", resultado);
            break;
            case 2:
             printf ("digite o quanto voce deseja sacar:");
            scanf ("%f", &acao1);
            if (acao1>=1000);
            printf ("Nao foi possivel sacar, digite um valor valido para o seu dinheiro na conta");
            break;
            case 3:
            printf ("\n ---SEU SALARIO E DE: 1000--- \n");
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
} while (opcao !=0);
return 0;
}