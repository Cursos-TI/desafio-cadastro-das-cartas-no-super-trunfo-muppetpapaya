#include <stdio.h> //biblioteca padrão

int main() { // início e declaração das variáveis

    //declaração das variáveis da carta1
    char codigocarta1[5]; // variável para armazenar o código da carta
    char estado1[20]; // variável para armazenar o estado
    char nomecidade1[20]; // variável para armazenar o nome da cidade
    int populacao1; // variável para armazenar o número da população
    int pontoturistico1; // variável para armazenar a quantidade de pontos turísticos
    float pib1; // variável para armazenar o valor do pib
    float areakm1; // variável para armazenar o valor da área em km²

    //declaração das variáveis da carta2
    char codigocarta2[5];
    char estado2[20];
    char nomecidade2[20];
    int populacao2;
    int pontoturistico2;
    float pib2;
    float areakm2;

    //coleta de dados do usuário para carta1
    printf("\n=== Carta 1 ===\n");
    printf("Digite o código da carta: "); // exibe a mensagem para que o usuário adicione o dado requerido
    scanf("%s", codigocarta1); // lê o código da carta digitado pelo usuário

    printf("Digite o estado: ");
    scanf("%s", estado1); // lê o estado informado

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade1); // lê o nome da cidade

    printf("Digite a população total: ");
    scanf("%d", &populacao1); // lê a população total

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontoturistico1); // lê a quantidade de pontos turísticos

    printf("Digite o valor do PIB: $");
    scanf("%f", &pib1); //lê o valor do pib

    printf("Digite a área em km²: ");
    scanf("%f", &areakm1); // lê a área em km²


    //exibição das informações
    printf("\n=== Carta 1 ===\n");
    printf("Código: %s\n", codigocarta1); // mostra o código da carta
    printf("Estado: %s\n", estado1); // mostra o estado
    printf("Cidade: %s\n", nomecidade1); // mostra o nome da cidade
    printf("População total: %d\n", populacao1); // mostra a população
    printf("Pontos turísticos: %d\n", pontoturistico1); // mostra os pontos turísticos
    printf("PIB: $%.2f bilhões de reais\n", pib1); // mostra o valor do pib
    printf("Área total: %.2f km²\n", areakm1); // mostra o total da área


    //coleta de dados do usuário para carta2
    printf("\n=== Carta 2 ===\n");
    printf("Digite o código da carta: ");
    scanf("%s", codigocarta2);

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade2);

    printf("Digite a população total: ");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontoturistico2);

    printf("Digite o valor do PIB: $");
    scanf("%f", &pib2);

    printf("Digite a área em km²: ");
    scanf("%f", &areakm2);

    printf("\n=== Carta 2 ===\n");
    printf("Código: %s\n", codigocarta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População total: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontoturistico2);
    printf("PIB: $%.2f bilhões de reais\n", pib2);
    printf("Área total: %.2f km²\n", areakm2);

    return 0; // finaliza o programa com sucesso
}
