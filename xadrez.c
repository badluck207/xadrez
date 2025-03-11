#include <stdio.h>

void moverTorre(int torreDireita, int torreEsquerda) // Mover Torre
{

    while (torreDireita > 0)
    {
        printf("Torre Movimentando Para Direita: ");
        printf("(Direita)\n");
        torreDireita--;
    }
    while (torreEsquerda > 0)
    {
        printf("Torre Movimentando Para Esquerda: ");
        printf("(Esquerda)\n");
        torreEsquerda--;
    }
}

void moverBispo(int casasDireita, int casasEsquerda) // Mover Bispo
{
    while (casasDireita > 0)
    {
        printf("Bispo Movimentando Para Diagonal Direita: ");
        printf("(Cima - Direita)\n");
        casasDireita--;
    }
    while (casasEsquerda > 0)
    {
        printf("Bispo Movimentando Para Diagonal Esquerda: ");
        printf("(Cima - Esquerda)\n");
        casasEsquerda--;
    }
}

void moverRainha(int raiDiagDireita, int raiDigEsquerda, int raiDireita, int raiEsquerda)
{
    while (raiDiagDireita > 0)
    {
        printf("\nRainha Movimentando Para: ");
        printf("(Cima - Direita)");
        raiDiagDireita--;
    }
    while (raiDigEsquerda > 0)
    {
        printf("\nRainha Movimentando Para: ");
        printf("(Cima - Esquerda)");
        raiDigEsquerda--;
    }
    while (raiDireita > 0)
    {
        printf("\nRainha Movimentando Para: ");
        printf("(Direita)");
        raiDireita--;
    }
    while (raiEsquerda > 0)
    {
        printf("\nRainha Movimentando Para: ");
        printf("(Esquerda)");
        raiEsquerda--;
    }
}

void moverCavalo(int cavaloD, int cavaloE)
{
    while (cavaloD--)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Cavalo Movimentando Para: Cima\n");
        }

        printf("Cavalo Movimentando Para: Direita\n");
    }

    while (cavaloE--)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Cavalo Movimentando Para: Cima\n");
        }

        printf("Cavalo Movimentando Para: Esquerda\n");
    }
}
int main()
{
    // declarar variaveis
    int opcao, opcao1, opcao2, opcao3, opcao4, opcao5;
    int torreDireita, torreEsquerda, casasDireita, casasEsquerda;
    int raiDiagDireita, raiDigEsquerda, raiDireita, raiEsquerda;
    int cavaloD, cavaloE;

    // Inicio do Jogo
    do
    {

        printf("****Bem vindo ao jogo de Xadrez***** \n"); // menu principal do jogo
        printf("1) Regras\n");
        printf("2) Jogar\n");
        printf("3) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) // Menu Principal
        {
        case 1:
            printf("\nRegras do jogo de xadrez!\n"); // Regras
            printf("1 - Escolha uma peca que deseja movimentar\n");
            printf("2 - Escolha uma opcao para mover cada peca de lugar\n");
            printf("3 - Insira o número de casas para mover de 1 a 8\n");
            printf("\n");
            break;
        case 2:
            do
            {
                printf("\nEscolha qual peca deseja Jogar: \n"); // MENU JOGAR
                printf("1) Torre\n");
                printf("2) Bispo\n");
                printf("3) Rainha\n");
                printf("4) Cavalo\n");
                printf("5) Voltar ao Menu Principal\n");
                printf("Digite sua opcao: ");
                scanf("%d", &opcao1);

                if (opcao1 == 5)
                {
                    printf("\nVoltando ao Menu Principal...\n\n"); // Caso o usuario digite 5 ira voltar ao menu principal
                    continue;
                }

                switch (opcao1) // Switchs de escolhas do usuario sobre a peca escolhida
                {
                case 1: // Movimentação da torre
                    printf("\nEscolha qual direcao a Torre ira andar: \n");
                    printf("1) Direita\n");
                    printf("2) Esquerda\n");
                    printf("Digite sua opcao: ");
                    scanf("%d", &opcao2);
                    switch (opcao2) // menu da torre
                    {
                    case 1:
                        torreEsquerda = 0;
                        printf("\n*************TORRE*************\n");
                        printf("Quantas casas deseja percorrer para Direita?(1-8): ");
                        scanf("%d", &torreDireita);
                        printf("\n");
                        if (torreDireita > 8 || torreDireita <= 0)
                        {
                            printf("Valor invalido, Tente Novamente!\n");
                            continue;
                        }
                        else
                        {
                            moverTorre(torreDireita, torreEsquerda); // Chamada da função mover torre
                        }

                        printf("\nResultado: Torre Moveu '%d' Casas Para  Direita!\n", torreDireita); // EXIBE O VALOR DE CASAS PERCORRIDA INSERIDA PELO USUARIO
                        break;
                    case 2:
                        torreDireita = 0;
                        printf("\n*************TORRE*************\n");
                        printf("Quantas casas deseja percorrer para Esquerda?(1-8): ");
                        scanf("%d", &torreEsquerda);
                        printf("\n");
                        if (torreEsquerda > 8 || torreEsquerda == 0)
                        {
                            printf("Valor invalido, Tente Novamente!\n");
                            continue;
                        }
                        else
                        {
                            moverTorre(torreDireita, torreEsquerda); // Chamada da função mover torre
                        }

                        printf("\nResultado: Torre Moveu '%d' Casas Para Esquerda!\n", torreEsquerda); // EXIBE O VALOR DE CASAS PERCORRIDA INSERIDA PELO USUARIO
                        break;

                    default: // default opçao 4
                        printf("\nOpcao Invalida, Tente Novamente!\n");
                        break;
                    }

                    break;
                case 2: // BISPO
                    printf("\nEscolha qual direcao o Bispo ira andar: \n");
                    printf("1) Diagonal Direita\n");
                    printf("2) Diagonal Esquerda\n");
                    printf("Digite sua opcao: ");
                    scanf("%d", &opcao3);

                    switch (opcao3) // menu do bispo
                    {
                    case 1:
                        casasEsquerda = 0; // Zera o valor

                        // Movimentação da Bispo
                        printf("\n******************BISPO*****************\n");
                        printf("Quantas Casas Deseja Percorrer para a Diagonal Direita?(1 - 8): ");
                        scanf("%d", &casasDireita);
                        printf("\n");
                        if (casasDireita > 8 || casasDireita <= 0) // CONDIÇAO CASO A QUANTIDADE DE CASAS PASSAR DA DEFINIDA
                        {
                            printf("Valor invalido, Tente Novamente!\n");
                            continue;
                        }
                        else
                        {
                            moverBispo(casasDireita, casasEsquerda);
                        }

                        printf("\nResultado: Bispo Moveu '%d' Casas Para Diagonal Direita!\n", casasDireita); // EXIBE O VALOR DE CASAS PERCORRIDA INSERIDA PELO USUARIO

                        break;
                    case 2:
                        casasDireita = 0; // Zera o valor da variavel para nao ser imprimida junto com casaEsquerda

                        printf("\n******************BISPO*****************\n");
                        // Movimentação da Bispo
                        printf("Quantas Casas Deseja Percorrer para a Diagonal Esquerda?(1 - 8): ");
                        scanf("%d", &casasEsquerda);
                        printf("\n");
                        if (casasEsquerda > 8 || casasEsquerda <= 0) // CONDIÇAO CASO A QUANTIDADE DE CASAS PASSAR DA DEFINIDA
                        {
                            printf("Valor invalido, Tente Novamente!\n");
                            continue;
                        }
                        else
                        {
                            moverBispo(casasDireita, casasEsquerda);
                        }

                        printf("\nResultado: Bispo Moveu '%d' Casas Para Diagonal Esquerda!\n", casasEsquerda); // EXIBE O VALOR DE CASAS PERCORRIDA INSERIDA PELO USUARIO

                        break;
                    default: // default da opçao 5 menu bispo
                        printf("\nOpcao Invalida, Tente Novamente!\n");
                        break;
                    }

                    break;
                case 3: // // Movimentação da Rainha
                    printf("\nEscolha qual direcao a Rainha ira andar: \n");
                    printf("1) Diagonal Direita\n");
                    printf("2) Diagonal Esquerda\n");
                    printf("3) Direita\n");
                    printf("4) Esquerda\n");
                    printf("Digite sua opcao: ");
                    scanf("%d", &opcao4);
                    printf("\n******************RAINHA******************\n");
                    switch (opcao4)
                    {
                    case 1:
                        raiDiagDireita = 0;
                        raiDigEsquerda = 0;
                        raiDireita = 0;
                        raiEsquerda = 0;
                        printf("Quantas Casas Deseja Percorrer para a Diagonal Direita?(1 - 8): ");
                        scanf("%d", &raiDiagDireita);

                        if (raiDiagDireita > 8 || raiDiagDireita == 0) // CONDIÇAO CASO A QUANTIDADE DE CASAS PASSAR DA DEFINIDA
                        {
                            printf("Valor invalido, Tente Novamente!\n");
                            continue;
                        }
                        else
                        {
                            moverRainha(raiDiagDireita, raiDigEsquerda, raiDireita, raiEsquerda); // Chamada da função mover torre
                        }
                        printf("\n");
                        printf("\nResultado: Rainha Moveu '%d' Casas Para Diagonal Direita!\n", raiDiagDireita); // EXIBE O VALOR DE CASAS PERCORRIDA INSERIDA PELO USUARIO
                        break;

                    case 2:
                        raiDiagDireita = 0;
                        raiDigEsquerda = 0;
                        raiDireita = 0;
                        raiDigEsquerda = 0;
                        printf("Quantas Casas Deseja Percorrer para a Diagonal Esquerda?(1 - 8): ");
                        scanf("%d", &raiDigEsquerda);

                        if (raiDigEsquerda > 8 || raiDigEsquerda == 0) // CONDIÇAO CASO A QUANTIDADE DE CASAS PASSAR DA DEFINIDA
                        {
                            printf("Valor invalido, Tente Novamente!\n");
                            continue;
                        }
                        else
                        {
                            moverRainha(raiDiagDireita, raiDigEsquerda, raiDireita, raiEsquerda); // Chamada da função mover torre
                        }
                        printf("\n");
                        printf("\nResultado: Rainha Moveu '%d' Casas Para Diagonal Esquerda!\n", raiDigEsquerda); // EXIBE O VALOR DE CASAS PERCORRIDA INSERIDA PELO USUARIO
                        break;

                    case 3:
                        raiDiagDireita = 0;
                        raiDigEsquerda = 0;
                        raiDireita = 0;
                        raiDigEsquerda = 0;
                        printf("Quantas casas deseja percorrer para Direita?(1-8): ");
                        scanf("%d", &raiDireita);

                        if (raiDireita > 8 || raiDireita == 0)
                        {
                            printf("Valor invalido, Tente Novamente!\n");
                            continue;
                        }
                        else
                        {
                            moverRainha(raiDiagDireita, raiDigEsquerda, raiDireita, raiEsquerda); // Chamada da função mover torre
                        }
                        printf("\n");
                        printf("\nResultado: Rainha Moveu '%d' Casas Para  Direita!\n", raiDireita); // EXIBE O VALOR DE CASAS PERCORRIDA INSERIDA PELO USUARIO
                        break;
                    case 4:
                        raiDiagDireita = 0;
                        raiDigEsquerda = 0;
                        raiDireita = 0;
                        raiEsquerda = 0;
                        printf("Quantas casas deseja percorrer para Esquerda?(1-8): ");
                        scanf("%d", &raiEsquerda);

                        if (raiEsquerda > 8 || raiEsquerda == 0)
                        {
                            printf("Valor invalido, Tente Novamente!\n");
                            continue;
                        }
                        else
                        {
                            moverRainha(raiDiagDireita, raiDigEsquerda, raiDireita, raiEsquerda); // Chamada da função mover torre
                        }
                        printf("\n");
                        printf("\nResultado: Rainha Moveu '%d' Casas Para Esquerda!\n", raiEsquerda); // EXIBE O VALOR DE CASAS PERCORRIDA INSERIDA PELO USUARIO
                        break;

                    default:
                        printf("\nOpcao Invalida, Tente Novamente!\n");
                        break;
                    }
                    break;
                case 4: // MOVIMENTACAO DO CAVALO
                    printf("\nEscolha qual direcao o Cavalo ira andar: \n");
                    printf("1) 2 a Cima - 1 a Direita\n");
                    printf("2) 2 a Cima - 1 a Esquerda\n");
                    printf("Digite sua opcao: ");
                    scanf("%d", &opcao5);

                    switch (opcao5)
                    {
                    case 1:
                        printf("\n******************CAVALO******************\n");
                        printf("\n");
                        cavaloD = 1;
                        cavaloE = 0;
                        moverCavalo(cavaloD, cavaloE);
                        printf("\nResultado: Cavalo Moveu '2' Cima e '%d' vez a Direita!\n", cavaloD); // EXIBE O VALOR DE CASAS PERCORRIDA INSERIDA PELO USUARIO
                        break;
                    case 2:
                        printf("\n******************CAVALO******************\n");
                        printf("\n");
                        cavaloE = 1;
                        cavaloD = 0;
                        moverCavalo(cavaloD, cavaloE);
                        printf("\nResultado: Cavalo Moveu '2' Cima e '%d' vez Esquerda!\n", cavaloE); // EXIBE O VALOR DE CASAS PERCORRIDA INSERIDA PELO USUARIO
                        break;
                    default:                                               // default da opcao 5
                        printf("\nOpcao invalida, Tente Novamente!...\n"); // caso a opcao digita for diferente retornara ao menu jogar
                        break;
                    }
                    break;

                default:                                               // DEFAULT DO SWITCH OPCAO 2
                    printf("\nOpcao invalida, Tente Novamente!...\n"); // caso a opcao digitada ser diferente ira retornar esse aviso(MENU JOGAR)
                    break;
                }
            } while (opcao1 != 5); // REPETICAO DO CICLO MENU JOGAR CASO A OPCAO SER DIFERENTE DE 5

            break; // BREAK DO CASE 2

        case 3: // Fim do jogo
            printf("Para sair do jogo Pressione 'Enter' \n");
            getchar();
            break; // BREAK DO CASE 3

        default:                                              // DEFAULT DO SWITCH OPCAO
            printf("\nOpcao invalida, Tente Novamente!\n\n"); // caso a opcao digitada ser diferente ira retornar esse aviso(Menu Principal)
            break;
        }

    } while (opcao != 3); // REPETICAO DO CICLO MENU PRINCIPAL CASO A OPCAO SER DIFERENTE DE 3

    return 0;
}