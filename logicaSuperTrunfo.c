#include <stdio.h>

// bibliotecas para utilizar o gerador de numeros da linguagem C
#include <stdlib.h>
#include <time.h>

int main(){

    // carta 1
    char
        pais_1[35],
        estado_1,
        nome_cidade_1[25],
        mensagem_carta_vencedora;

    int
        codigo_carta_1,
        pontos_turisticos_1;

    unsigned long int
        populacao_1;

    float
        area_cidade_1,
        pib_cidade_1,
        densidade_populacional_1,
        pib_per_capta_1,
        super_poder_1;

    // carta 2
    char
        pais_2[35],
        estado_2,
        nome_cidade_2[25];

    int
        codigo_carta_2,
        pontos_turisticos_2;

    unsigned long int
        populacao_2;

    float
        area_cidade_2,
        pib_cidade_2,
        densidade_populacional_2,
        pib_per_capta_2,
        super_poder_2;

    unsigned short
        opcao = 1,
        carta = 1,
        atributo = 1;

    srand(time(0)); // necessario para iniciar o gerador de números aleatórios

    // Gerando valores para os codigos das cartas automaticamente
    codigo_carta_1 = (rand() % 10) + 1; // de 1 a 10
    codigo_carta_2 = (rand() % 19) + 2; // de 2 a 20
    
    while (opcao != 0){
        //------Deixar essa lógica dentro do looping para que os dados das cartas sejam atualizados ao serem cadastradas e depois listadas-----

        // calculando densidade populacional (populacao / area);
        densidade_populacional_1 = (populacao_1 / area_cidade_1);
    
        densidade_populacional_2 = (populacao_2 / area_cidade_2);
    
        // calculando o pib per capta (pib_cidade / populacao)
        pib_per_capta_1 = (pib_cidade_1 / populacao_1);
    
        pib_per_capta_2 = (pib_cidade_2 / populacao_2);
    
        /*
        calculando o superpoder somando todos os atributos numericos
    
        (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional
        – quanto menor a densidade, maior o "poder")
        */
        super_poder_1 = (float)(populacao_1 + area_cidade_1 + pib_cidade_1 + pib_per_capta_1) - densidade_populacional_1;
    
        super_poder_2 = (float)(populacao_2 + area_cidade_2 + pib_cidade_2 + pib_per_capta_2) - densidade_populacional_2;

        //------------------------------------------------------------------------------------------------------------------

        printf(
            "\n\nSuper Trunfo!"
            "\nEscolha uma das opções para continuarmos:\n"
            "\n0. Sair"
            "\n1. Cadastrar cartas"
            "\n2. Verificar cartas cadastradas"
            "\n3. Comparar atributos vencedores (um por vez)"
            "\n4. Comprar TODOS os atributos vencedores Carta 1 x Carta 2"
            "\n5. Ver regras do jogo\n"
            "\nDigite sua opção: "
        );

        scanf("%hu", &opcao); //hu = unsigned short h = short

        switch (opcao){
            
            case 0: 
                printf("\n\n--- Você escolheu sair. Volte ao Super Trunfo quando quiser! 😉---\n\n");
            break;

            case 1:
                printf(
                    "\n\nBem vindo ao Super Trunfo! 😄"
                    "\nVamos iniciar o processo de cadastramento das cartas.\n"
                );

                //declarando o pais
                printf("\nDigite um nome para representar o país da carta 1 (sem acentuação, ex, em vez de Japão, escreva Japao): ");

                scanf("%s", pais_1);

                //declarando o pais
                printf("\nAgora, digite um nome para representar o país da carta 2: ");

                scanf("%s", pais_2);

                // declarando o estado
                printf("\nDigite uma letra para representar o estado da carta 1: ");

                scanf(" %c", &estado_1);

                printf("\nBeleza! Digite outra letra, agora para representar o estado da carta 2: ");

                scanf(" %c", &estado_2);

                // declarando a cidade
                printf("\nAgora, digite o nome da cidade da carta 1: ");

                scanf("%s", nome_cidade_1);

                printf("\nQual será o nome da cidade da carta 2? ");

                scanf("%s", nome_cidade_2);

                // declarando quantidade de habitantes
                printf("\nLegal, já temos as letras que representarão os estados, e também os nomes das cidades que representarão as cartas 1 e 2."
                    "\nVamos continuar! Digite o número de habitantes que terá em %s: ",
                    nome_cidade_1);

                scanf("%u", &populacao_1);

                printf("\nE na cidade de %s? Digite o número de habitantes: ", nome_cidade_2);

                scanf("%u", &populacao_2);

                // declarando a área das cidades
                printf(
                    "\nPensando que %s terá aproximadamente %u habitantes, qual será a área em m² dessa cidade? (Digite somente números) ",
                    nome_cidade_1, populacao_1);

                scanf("%f", &area_cidade_1);

                printf(
                    "\nLegal! E a cidade de %s? Terá quantos m²? ", nome_cidade_2);

                scanf("%f", &area_cidade_2);

                // declarando o PIB
                printf(
                    "\nMuito bem! Pensando que a cidade de %s terá aproximadamente %u habitantes e uma área aproximada de %.2f m², qual será o valor do PIB (Produto Interno Bruto) produzido anualmente por essa cidade? ",
                    nome_cidade_1, populacao_1, area_cidade_1);

                scanf("%f", &pib_cidade_1);

                printf(
                    "\nJá a cidade de %s, com seus %u habitantes e área aproximada de %.2f m², terá um PIB anual equivalente a quanto? ",
                    nome_cidade_2, populacao_2, area_cidade_2);

                scanf("%f", &pib_cidade_2);

                // declarando quantidade pontos turísticos
                printf(
                    "\nQuase terminando!\n"
                    "\nLevando em conta que a cidade de %s terá %u habitantes, e uma área de %.2f m², quantos pontos turísticos teremos nela? ",
                    nome_cidade_1, populacao_1, area_cidade_1);

                scanf("%d", &pontos_turisticos_1);

                printf("E na cidade de %s, com seus %u habitantes e área aproximada de %.2f m², terá quantos pontos turísticos? ", nome_cidade_2, populacao_2, area_cidade_2);

                scanf("%d", &pontos_turisticos_2);

                printf("\n\n--- Cartas cadastradas com sucesso! ---\n\n");
            break;

            case 2:
                while (carta !=0){
                    printf(
                        "\nQual carta você deseja verificar?\n"
                        "\n0. Voltar ao menu"
                        "\n1. Carta 1"
                        "\n2. Carta 2\n"
                        "\nEscolha: "
                    );

                    scanf("%hu", &carta); //hu = unsigned short
                    
                    switch (carta){

                        case 0:
                            printf("\n\n---Voltando ao menu principal...---\n\n");
                            carta = 0;
                        break;

                        case 1:
                            printf(
                                "\nGerando suas cartas...\n"
                        
                                "\nCarta 1: \n"
                        
                                "\nPaís: %s"
                                "\nEstado: %c"
                                "\nCódigo: %c%d"
                                "\nNome da Cidade: %s"
                                "\nPopulação: %u "
                                "\nÁrea: %.2f m² "
                                "\nPIB: R$ %.2f"
                                "\nNúmero de Pontos Turísticos: %d"
                                "\nDensidade populacional: %.2f hab/km²"
                                "\nPIB per capta: R$ %.2f"
                                "\nSuper poder: %.2f pontos\n"
                                "\n---------------------------------------------------------",
                        
                                pais_1,
                                estado_1,
                                estado_1, codigo_carta_1,
                                nome_cidade_1,
                                populacao_1,
                                area_cidade_1,
                                pib_cidade_1,
                                pontos_turisticos_1,
                                densidade_populacional_1,
                                pib_per_capta_1,
                                super_poder_1
                            );

                        break;

                        case 2:
                            printf(
                                "\nCarta 2: \n"
                        
                                "\nPaís: %s"
                                "\nEstado: %c"
                                "\nCódigo: %c%d"
                                "\nNome da Cidade: %s"
                                "\nPopulação: %u"
                                "\nÁrea: %.2f m²"
                                "\nPIB: R$ %.2f"
                                "\nNúmero de Pontos Turísticos: %d"
                                "\nDensidade populacional: %.2f hab/km²"
                                "\nPIB per capta: R$ %.2f"
                                "\nSuper poder: %.2f pontos\n"
                                "\n---------------------------------------------------------",
                                
                                pais_2,
                                estado_2,
                                estado_2, codigo_carta_2,
                                nome_cidade_2,
                                populacao_2,
                                area_cidade_2,
                                pib_cidade_2,
                                pontos_turisticos_2,
                                densidade_populacional_2,
                                pib_per_capta_2,
                                super_poder_2
                            );

                        break;
                        
                        default:
                            printf("\n\n*** Você precisa escolher se quer ver a carta 1 ou 2. Caso queira sair, digite 0. ***\n\n");
                        break;
                    }
                }

            break;

            case 3:

            while (atributo !=0){

                printf(
                    "\n\nQual atributo você pretende comparar?\n"
                    "\n0. Voltar ao menu"
                    "\n1. População"
                    "\n2. Área"
                    "\n3. PIB"
                    "\n4. Número de Pontos Turísticos"
                    "\n5. Densidade populacional"
                    "\n6. PIB per capta"
                    "\n7. Super poder\n"
                    "\nDigite sua escolha: "
                );

                scanf("%hu", &atributo);

                switch (atributo){
                    case 0: 
                        printf("\n\n---Voltando ao menu principal...---\n\n");
                    break;

                    case 1:
                        if (populacao_1 > populacao_2)
                        {
                            printf("\nA cidade mais populosa foi: %s com %u habitantes! Carta 1 venceu!", nome_cidade_1, populacao_1);
                        }
                        else if (populacao_1 < populacao_2)
                        {
                            printf("\nA cidade mais populosa foi: %s com %u habitantes! Carta 2 venceu!", nome_cidade_2, populacao_2);
                        }
                        else
                    {
                        printf("\nAs cidades %s e %s empataram na quantidade de habitantes!", nome_cidade_1, nome_cidade_2);
                    }
            
                        break;

                    case 2:
                        if (area_cidade_1 > area_cidade_2)
                        {
                            printf("\nA cidade com uma maior área em m² foi: %s! Carta 1 venceu!", nome_cidade_1);
                        }
                        else if (area_cidade_1 < area_cidade_2)
                        {
                            printf("\nA cidade com uma maior área em m² foi: %s! Carta 2 venceu!", nome_cidade_2);
                        }
                        else
                    {
                        printf("\nAs cidades %s e %s empataram na quantidade de m²!", nome_cidade_1, nome_cidade_2);
                    }
                        
                    break;

                    case 3:
                        if (pib_cidade_1 > pib_cidade_2)
                        {
                            printf("\nA cidade com o maior PIB foi %s! Carta 1 venceu!", nome_cidade_1);
                        }
                        else if (pib_cidade_1 < pib_cidade_2)
                        {
                            printf("\nA cidade com o maior PIB foi %s!  Carta 1 venceu!", nome_cidade_2);
                        }
                        else
                        {
                            printf("\nAs cidades %s e %s empataram no valor do PIB anual!", nome_cidade_1, nome_cidade_2);
                        }

                    break;
                    
                    case 4:
                        if (pontos_turisticos_1 > pontos_turisticos_2)
                        {
                            printf("\nA cidade com + pontos turísticos foi %s! Carta 1 venceu!", nome_cidade_1);
                        }
                        else if (pontos_turisticos_1 < pontos_turisticos_2)
                        {
                            printf("\nA cidade com + pontos turísticos foi %s!  Carta 2 venceu!", nome_cidade_2);
                        }
                        else
                    {
                        printf("\nAs cidades %s e %s empataram na quantidade de pontos turísticos!", nome_cidade_1, nome_cidade_2);
                    }                

                    break;
                    
                    case 5:
                        if (densidade_populacional_1 < densidade_populacional_2)
                        {
                            printf("\nA cidade vencedora na densidade populacional foi %s!  Carta 1 venceu!", nome_cidade_1);
                        }
                        else if (densidade_populacional_2 < densidade_populacional_1)
                        {
                            printf("\nA cidade vencedora na densidade populacional foi %s!  Carta 2 venceu!", nome_cidade_2);
                        }
                        else
                        {
                            printf("\nAs cidades %s e %s empataram no quesito densidade populacional!", nome_cidade_1, nome_cidade_2);
                        }

                    break;

                    case 6:
                        if (pib_per_capta_1 > pib_per_capta_2)
                        {
                            printf("\nA cidade vencedora no PIB per capta foi %s!  Carta 1 venceu!", nome_cidade_1);
                        }
                        else if (pib_per_capta_1 < pib_per_capta_2)
                        {
                            printf("\nA cidade vencedora no PIB per capta foi %s!  Carta 2 venceu!", nome_cidade_2);
                        }
                        else
                        {
                            printf("\nAs cidades %s e %s empataram no quesito PIB Per Capta!", nome_cidade_1, nome_cidade_2);
                        }

                    break;

                    case 7:
                        if (super_poder_1 > super_poder_2)
                        {
                            printf("\nA cidade vencedora no Super Poder foi %s! Carta 1 venceu!", nome_cidade_1);
                        }
                        else if (super_poder_1 < super_poder_2)
                        {
                            printf("\nA cidade vencedora no Super Poder foi %s! Carta 2 venceu!", nome_cidade_2);
                        }
                        else
                        {
                            printf("\nAs cidades %s e %s empataram no quesito Super Poder!", nome_cidade_1, nome_cidade_2);
                        }
                 
                    break;
                    
                    default:
                        printf("\n\n***Você precisa escolher uma opção válida, ou digite 0 para voltar ao menu.***\n\n");
                        break;
                    }
            }
            
            break;

            case 4:
                printf(
                    "\n*** Caso 1, significa que a carta 1 venceu, caso 0, significa que a carta 2 venceu. ***\n"
                    "\nComparando os atributos das cartas e encontrando os maiores valores: \n"
            
                    "\nPopulação: Carta 1 venceu? %d"
                    "\nÁrea: Carta 1 venceu? %d"
                    "\nPIB: Carta 1 venceu? %d"
                    "\nNúmero de Pontos Turísticos: Carta 1 venceu? %d"
                    "\nDensidade populacional: Carta 1 venceu? %d"
                    "\nPIB per capta: Carta 1 venceu? %d"
                    "\nSuper poder: Carta 1 venceu? %d\n\n",
            
                    populacao_1 > populacao_2 ? 1 : 0,
                    area_cidade_1 > area_cidade_2 ? 1 : 0,
                    pib_cidade_1 > pib_cidade_2 ? 1 : 0,
                    pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0,
                    densidade_populacional_1 < densidade_populacional_2 ? 1 : 0,
                    pib_per_capta_1 > densidade_populacional_2 ? 1 : 0,
                    super_poder_1 > super_poder_2 ? 1 : 0
                );

            break;

            case 5:
                printf(
                    "\n----------------------------------------------------------------------------------------------------------------------"
                    "\nNo Supertrunfo, cada carta tem um 'super poder', que é a soma dos seus atributos numéricos (menos o código da carta)."
                    "\nA carta com maior pontuação total tem o maior super poder, mas isso não garante vitória em todos os atributos."
                    "\nVocê pode usar a função 'Comparar atributos vencedores' para ver quais pontos fortes se destacam em cada carta."
                    "\nAtenção: no atributo 'Densidade Populacional', quanto MENOR o valor, MAIOR o poder — diferente dos outros atributos."
                    "\nPara jogar, primeiro cadastre duas cartas. Depois, a comparação entre elas será liberada."
                    "\nDivirta-se!"
                    "\n\nEsse é um projeto desenvolvido com 💙 por Maurici0M e apoiado por Faculdade Estácio!"
                    "\n----------------------------------------------------------------------------------------------------------------------\n"
                );
            
            break;

        default:
            printf("\n\n***Você precisa escolher uma opção válida, ou digite 0 para voltar ao menu.***\n\n");
            break;
        }
    
    }

    return 0;
}
