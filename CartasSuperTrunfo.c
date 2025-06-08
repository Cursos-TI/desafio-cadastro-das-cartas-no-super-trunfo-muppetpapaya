#include <stdio.h> //biblioteca padrão
#include <string.h> //biblioteca de strings

int main() { // início e declaração das variáveis

    //declaração das variáveis da carta1
    char codigocarta1[4]; // variável para armazenar o código da carta
    char estado1[50]; // variável para armazenar o estado
    char nomecidade1[50]; // variável para armazenar o nome da cidade
    int populacao1; // variável para armazenar o número da população
    int pontoturistico1; // variável para armazenar a quantidade de pontos turísticos
    float pib1; // variável para armazenar o valor do pib
    float areakm1; // variável para armazenar o valor da área em km²
    float densidadepopulacional1; //variável para armazenar o valor da densidade populacional
    float pibpercapita1; // variável para armazenar o valor do pib per capita

    //declaração das variáveis da carta2
    char codigocarta2[4];
    char estado2[50];
    char nomecidade2[50];
    int populacao2, pontoturistico2;
    float pib2, areakm2, densidadepopulacional2, pibpercapita2;

    //coleta de dados do usuário para carta1
    printf("\n=== Carta 1 ===\n");
    printf("Digite o código da carta composto por uma letra (A-H) e dois números: "); // exibe a mensagem para que o usuário adicione o dado requerido
    scanf("%3s", codigocarta1); // lê o código da carta digitado pelo usuário

    getchar(); //executa o restante do programa após o usuário apertar 'Enter', para não dar erro de código entre 'scanf' e 'fgets' (foi o que eu entendi!)

    printf("Digite o estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0'; // lê o estado

    printf("Digite o nome da cidade: ");
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    nomecidade1[strcspn(nomecidade1, "\n")] = '\0'; // lê a cidade

    printf("Digite a população total: ");
    scanf("%d", &populacao1); // lê a população total

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontoturistico1); // lê a quantidade de pontos turísticos

    printf("Digite o valor do PIB: $");
    scanf("%f", &pib1); //lê o valor do pib

    printf("Digite a área em km²: ");
    scanf("%f", &areakm1); // lê a área em km²

    densidadepopulacional1 = ((float)populacao1 / areakm1);
    pibpercapita1 = (float)((pib1 * 1e9) / populacao1); // como o pib está especificado em bilhões, é preciso dividí-lo por 1 milhão, para então convertê-lo em reais


    //exibição das informações
    printf("\n=== Carta 1 ===\n");
    printf("Código: %s\n", codigocarta1); // mostra o código da carta
    printf("Estado: %s\n", estado1); // mostra o estado
    printf("Cidade: %s\n", nomecidade1); // mostra o nome da cidade
    printf("População total (sem pontos ou vírgulas): %d\n", populacao1); // mostra a população
    printf("Pontos turísticos: %d\n", pontoturistico1); // mostra os pontos turísticos
    printf("PIB (exemplo: 123.4): R$%.3f bilhões\n", pib1); // mostra o valor do pib
    printf("Área total: %.2f km²\n", areakm1); // mostra o total da área
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1); //mostra a densidade populacional
    printf("PIB per capita: R$%.2f\n", pibpercapita1); //mostra o pib per capita


    //coleta de dados do usuário para carta2
    printf("\n=== Carta 2 ===\n");
    printf("Digite o código da carta composto por uma letra (A-H) e dois números: ");
    scanf("%3s", codigocarta2);

    getchar();

    printf("Digite o estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite o nome da cidade: ");
    fgets(nomecidade2, sizeof(nomecidade2), stdin);
    nomecidade2[strcspn(nomecidade2, "\n")] = '\0';

    printf("Digite a população total: ");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontoturistico2);

    printf("Digite o valor do PIB: $");
    scanf("%f", &pib2);

    printf("Digite a área em km²: ");
    scanf("%f", &areakm2);

    densidadepopulacional2 = ((float)populacao2 / areakm2);
    pibpercapita2 = ((float)(pib2 * 1e9) / populacao2);

    printf("\n=== Carta 2 ===\n");
    printf("Código: %s\n", codigocarta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População total (sem pontos ou vírgulas): %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontoturistico2);
    printf("PIB (exemplo: 123.4): R$%.2f bilhões\n", pib2);
    printf("Área total: %.2f km²\n", areakm2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: R$%.2f\n", pibpercapita2);

    return 0; // finaliza o programa com sucesso
}
