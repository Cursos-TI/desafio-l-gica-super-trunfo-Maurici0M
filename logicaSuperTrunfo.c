#include <stdio.h>

//bibliotecas para utilizar o gerador de numeros da linguagem C
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));  // necessario para iniciar o gerador de números aleatórios

    //carta 1
    char 
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

    //carta 2
    char 
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

    //Gerando valores para os codigos das cartas automaticamente
    codigo_carta_1 = (rand() % 10) + 1;      // de 1 a 10
    codigo_carta_2 = (rand() % 19) + 2;      // de 2 a 20


    /*-----------------------------Iniciando a aplicação-----------------------------*/

    printf(
        "\nBem vindo ao Super Trunfo!"
        "\nVamos iniciar o processo de cadastramento das cartas.\n"
    );

    //declarando o estado
    printf("\nDigite uma letra para representar o estado da carta 1: ");

    scanf("%c", &estado_1);

    printf("\nBeleza! Digite outra letra, agora para representar o estado da carta 2: ");

    scanf(" %c", &estado_2);

    //declarando a cidade
    printf("\nAgora, digite o nome da cidade da carta 1: ");

    scanf("%s", nome_cidade_1);

    printf("\nQual será o nome da cidade da carta 2? ");

    scanf("%s", nome_cidade_2);


    //declarando quantidade de habitantes
    printf(
        "\nLegal, já temos as letras que representarão os estados, e também os nomes das cidades que representarão as cartas 1 e 2."
        "\nVamos continuar! Digite o número de habitantes que terá em %s: ", nome_cidade_1
    );

    scanf("%u", &populacao_1);
    
    printf ("\nE na cidade de %s? Digite o número de habitantes: ", nome_cidade_2);

    scanf("%u", &populacao_2);

    //declarando a área das cidades
    printf(
        "\nPensando que %s terá aproximadamente %u habitantes, qual será a área em m² dessa cidade? (Digite somente números) ", 
        nome_cidade_1, populacao_1);

    scanf("%f", &area_cidade_1);

    printf(
        "\nLegal! E a cidade de %s? Terá quantos m²? ", nome_cidade_2
    );

    scanf("%f", &area_cidade_2);

    //declarando o PIB
    printf(
        "\nMuito bem! Pensando que a cidade de %s terá aproximadamente %u habitantes e uma área aproximada de %.2f m², qual será o valor do PIB (Produto Interno Bruto) produzido anualmente por essa cidade? ", 
        nome_cidade_1, populacao_1, area_cidade_1
    );

    scanf("%f", &pib_cidade_1);

    printf(
        "\nJá a cidade de %s, com seus %u habitantes e área aproximada de %.2f m², terá um PIB anual equivalente a quanto? ",
        nome_cidade_2, populacao_2, area_cidade_2
    );

    scanf("%f", &pib_cidade_2);

    //declarando quantidade pontos turísticos
    printf(
        "\nQuase terminando!\n" 
        "\nLevando em conta que a cidade de %s terá %u habitantes, e uma área de %.2f m², quantos pontos turísticos teremos nela? ", 
        nome_cidade_1, populacao_1, area_cidade_1
    );

    scanf("%d", &pontos_turisticos_1);
    
    
    printf("E na cidade de %s, com seus %u habitantes e área aproximada de %.2f m², terá quantos pontos turísticos? ", nome_cidade_2, populacao_2, area_cidade_2
    );

    scanf("%d", &pontos_turisticos_2);

    //calculando densidade populacional (populacao / area);
    densidade_populacional_1 = (populacao_1 / area_cidade_1);

    densidade_populacional_2 = (populacao_2 / area_cidade_2);

    //calculando o pib per capta (pib_cidade / populacao)
    pib_per_capta_1 = (pib_cidade_1 / populacao_1);
    
    pib_per_capta_2 = (pib_cidade_2 / populacao_2);

    /*
    calculando o superpoder somando todos os atributos numericos
    
    (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional 
    – quanto menor a densidade, maior o "poder")
    */
    super_poder_1 = (float) (populacao_1 + area_cidade_1 + pib_cidade_1 + pib_per_capta_1) - densidade_populacional_1;
    
    super_poder_2 = (float) (populacao_2 + area_cidade_2 + pib_cidade_2 + pib_per_capta_2) - densidade_populacional_2;


    //imprimindo as cartas no terminal
    
    printf(
        "\nGerando suas cartas...\n"

        "\nCarta 1: \n"

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

    printf(
        "\nCarta 2: \n"

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

    printf(
        "\nComparando os atributos das cartas e encontrando os maiores valores: "

        "\nPopulação: Carta 1 venceu? %d"
        "\nÁrea: Carta 1 venceu? %d" 
        "\nPIB: Carta 1 venceu? %d"
        "\nNúmero de Pontos Turísticos: Carta 1 venceu? %d"
        "\nDensidade populacional: Carta 1 venceu? %d"
        "\nPIB per capta: Carta 1 venceu? %d"
        "\nSuper poder: Carta 1 venceu? %d\n", 

        populacao_1 > populacao_2 ? 1 : 0, 
        area_cidade_1 > area_cidade_2 ? 1 : 0, 
        pib_cidade_1 > pib_cidade_2 ? 1 : 0, 
        pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0,
        densidade_populacional_1 < densidade_populacional_2 ? 1: 0,
        pib_per_capta_1 > densidade_populacional_2 ? 1 : 0,
        super_poder_1 > super_poder_2 ? 1 : 0
    );

    printf( "\n---------------------------------------------------------");

    //validações para verificar qual carta teve o maior atributo:

    if (populacao_1 > populacao_2){
        printf("\nA cidade mais populosa foi: %s", nome_cidade_1);
    } else if(populacao_1 < populacao_2){
        printf("\nA cidade mais populosa foi: %s", nome_cidade_2);
    } else {
        printf("\nAs cidades %s e %s empataram na quantidade de habitantes!", nome_cidade_1, nome_cidade_2);
    }
    
    if (area_cidade_1 > area_cidade_2){
        printf("\nA cidade com uma maior área em m² foi: %s", nome_cidade_1);
    } else if(area_cidade_1 < area_cidade_2){
        printf("\nA cidade com uma maior área em m² foi: %s", nome_cidade_2);
    } else {
        printf("\nAs cidades %s e %s empataram na quantidade de m²!", nome_cidade_1, nome_cidade_2);
    }

    if (pib_cidade_1 > pib_cidade_2){
        printf("\nA cidade com o maior PIB foi %s!", nome_cidade_1);
    } else if(pib_cidade_1 < pib_cidade_2){
        printf("\nA cidade com o maior PIB foi %s!", nome_cidade_2);
    } else {
        printf("\nAs cidades %s e %s empataram no valor do PIB anual!!", nome_cidade_1, nome_cidade_2);
    }

    if (pontos_turisticos_1 > pontos_turisticos_2){
        printf("\nA cidade com + pontos turísticos foi %s!", nome_cidade_1);
    } else if(pontos_turisticos_1 < pontos_turisticos_2){
        printf("\nA cidade com + pontos turísticos foi %s!", nome_cidade_2);
    } else {
        printf("\nAs cidades %s e %s empataram na quantidade de pontos turísticos!", nome_cidade_1, nome_cidade_2);
    }

    if (densidade_populacional_1 < densidade_populacional_2){
        printf("\nA cidade vencedora na densidade populacional foi %s!", nome_cidade_1);
    } else if(densidade_populacional_2 < densidade_populacional_1){
        printf("\nA cidade vencedora na densidade populacional foi %s!", nome_cidade_2);
    } else {
        printf("\nAs cidades %s e %s empataram no quesito densidade populacional!", nome_cidade_1, nome_cidade_2);
    }

    if (pib_per_capta_1 > pib_per_capta_2){
        printf("\nA cidade vencedora no PIB per capta foi %s!", nome_cidade_1);
    } else if(pib_per_capta_1 < pib_per_capta_2){
        printf("\nA cidade vencedora no PIB per capta foi %s!", nome_cidade_2);
    } else {
        printf("\nAs cidades %s e %s empataram no quesito PIB Per Capta!", nome_cidade_1, nome_cidade_2);
    }

    if (super_poder_1 > super_poder_2){
        printf("\nA cidade vencedora no Super Poder foi %s!", nome_cidade_1);
    } else if(super_poder_1 < super_poder_2){
        printf("\nA cidade vencedora no Super Poder foi %s!", nome_cidade_2);
    } else {
        printf("\nAs cidades %s e %s empataram no quesito Super Poder!", nome_cidade_1, nome_cidade_2);
    }


    return 0;
}