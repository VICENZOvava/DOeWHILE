    #include <stdio.h>
    #include <locale.h>
    #include <stdlib.h>
    int main() {
    setlocale(LC_ALL,"");
    int dn, cpf, telefone, concluir, servico, SerQ, extra, tec, lav;
    char nome, email, quarto, comida, espe, *concluirN, *servicoN;
    
        do // inico do while
    {
    printf ("Bem vindo ao Hotel RERE, por favor preencha o cadastro \n");
    printf ("Digite o seu nome: \n");
    scanf  ("%s", &nome);
    printf ("Digite o seu telefone: \n");
    scanf  ("%d", &telefone);
    printf ("Digite o seu CPF: \n");
    scanf  ("%d", &cpf);
    printf ("Digite o seu email: \n");
    scanf  ("%s", &email);
    printf ("Digite sua data de nascimento \n");
    scanf  ("%d", &dn);
    printf ("quantas diarias são e quantas pessoas serao no quarto? \n");
    scanf  ("%s", &quarto);
    
    printf ("Se você deseja concluir o cadastro digite 1, digite 2 para voltar para o cadastro \n");
    printf ("1.concluir \n");
    printf ("2.voltar \n");
    scanf  ("%d", &concluir);
        switch (concluir) {
	   case 1:
	   	concluirN = "1";
	   	printf ("O seu cadastro foi concluido com sucesso, o seu quarto estará disponivel conforme a nossa disponibilidade \n");
	   	break;
	   case 2:
	   	printf ("faça denovo o cadastro.");
	   	break;
	   	default:
	   	printf ("opcao invalida! programa encerrado. \n");
        return 1;
    }
    
    printf ("voce deseja acionar algum servico de quarto? \n");
    printf ("1. Entrega de refeicoes: \n");
    printf ("2. Limpeza e arrumacao: \n");
    printf ("3. Amenidades extras: \n");
    printf ("4. Serviço de lavanderia: \n");
    printf ("5 Auxilio tecnico: \n");
    printf ("6. Pedidos especiais/duvidas: \n");
    printf ("7. Nenhum dos servicos: \n");
    scanf  ("%d", &servico);
        switch (servico) {
       case 1: 
        servicoN = "1";
        printf ("Aqui está o cardapio com nossas opçoes de comida \n");
        printf ("1.Lanches:Hambúrgueres: X-Burger (pão, hambúrguer, queijo, alface e tomate), X-Bacon (pão, hambúrguer, queijo, bacon, alface e tomate), X-Egg (pão, hambúrguer, queijo, ovo, alface e tomate), X-Tudo (pão, hambúrguer, queijo, presunto, bacon, ovo, alface, tomate e molho especial) \n");
        printf ("2.Sanduíches naturais:Frango desfiado com cenoura, alface e maionese, Peito de peru com cream cheese e rúcula \n");
        printf ("3.Porções: Batata frita (simples ou com cheddar e bacon), Mini coxinhas, Açaí com acompanhamentos (granola, banana, leite condensado) \n");
        printf ("4.Bebidas: Sucos, Refrigerantes (lata ou 600ml), Milk-shakes (morango, chocolate, baunilha), Água (com ou sem gás) \n");
        printf ("selecione o numero da linha e escreva o item desejado: \n");
        scanf  ("%d", &comida);
        printf ("Apos isso é so esperar e seu pedido irá chegar, obrigado! \n");
        break;
      case 2: 
        servicoN = "2";
        printf ("Voce deseja acionar alguem para limpar e arrumar seu quarto? \n");
        printf ("1. Sim \n");
        printf ("2. Nao \n");
        scanf ("%d", &SerQ);
        if (SerQ = 1) {
        printf ("O seu servico de quarto chegará assim que conseguimos \n");
    }
	    else if (SerQ = 2); {
	    printf ("Obrigado! \n ");
	}
	   break;
	  case 3:
	  	servicoN = "3";
	  	printf ("Coloque o numero do servico desejado que acionaremos os proprietarios para adcionar ao seu plano \n");
		printf ("1.Café da manhã gratuito, \n 2.Wi-Fi de alta velocidade, \n 3.Estacionamento gratuito ou valet, \n 4.Serviços de spa como massagem, \n 5.sauna ou jacuzzi, \n 6.Academia de ginástica ou piscinas, \n 7.Serviço de quarto 24 horas, \n 8.Kit de boas-vindas (água, frutas ou chocolates), \n 9.Itens de banheiro premium como roupões, chinelos e produtos de marcas renomadas, \n 10.Serviços especiais para crianças como berços, brinquedos ou atividades recreativas, \n 11.Atividades e tours organizados. \n");
        scanf ("%d", &extra );
        break;
      case 4:
      	servicoN = "4";
      	printf ("Voce deseja acionar o servico de lavanderia? \n" );
      	printf ("1. Sim \n");
        printf ("2. Nao \n");
        scanf ("%d", &lav);
      	 if (lav = 1) {
        printf ("O seu servico de quarto chegará assim que conseguimos \n");
    }
	    else if (lav = 2) {
	    printf ("Obrigado!");
	}
	    break;
	  case 5:
      	servicoN ="5";
      	printf ("Voce deseja acionar o auxilio tecnico para o seu quarto? \n");
      	printf ("1. Sim \n");
        printf ("2. Nao \n");
        scanf ("%d", &tec);
      	 if (tec = 1) {
        printf ("O seu servico de quarto chegará assim que conseguimos \n");
    }
	     else if (tec = 2) {
	    printf ("Obrigado! \n");
	}
	    break;
	  case 6:
	  	servicoN = "6";
	  	printf ("Se voce deseja algum pedido especial ou alguma pergunta escreva abaixo \n");
	  	scanf  ("%c", &espe);
	    break;
	  case 7:
	  	servicoN = "7";
	  	printf ("Obrigado pela compreensao! \n");
	  	break;
	  	default:
	   	printf ("opcao invalida! programa encerrado. \n");
	   	return 1;
	   	         
}
         printf ("\n Pressione Enter para continuar");
        getchar (); // Funciona com scanf
        getchar (); // Aguarda o enter 
        
               system("clear");
        
} while (servicoN !=0);


        return 0;
         
}
