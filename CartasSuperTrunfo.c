#include <stdio.h> //biblioteca padrão

int main() { // início e declaração das variáveis
    char codigocarta[5]; // variável para armazenar o código da carta
    char estado[20]; // variável para armazenar o estado
    char nomecidade[20]; // variável para armazenar o nome da cidade
    int populacao; // variável para armazenar o número da população
    int pontoturistico; // variável para armazenar a quantidade de pontos turísticos
    float pib; // variável para armazenar o valor do pib
    float areakm; // variável para armazenar o valor da área em km²

    //coleta de dados do usuário
    printf("Digite o código da carta: "); // exibe a mensagem para que o usuário adicione o dado requerido
    scanf("%s", codigocarta); // lê o código da carta digitado pelo usuário
    printf("Digite o estado: ");
    scanf("%s", estado); // lê o estado informado

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade); // lê o nome da cidade

    printf("Digite a população total: ");
    scanf("%d", &populacao); // lê a população total

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontoturistico); // lê a quantidade de pontos turísticos

    printf("Digite o valor do PIB: $");
    scanf("%f", &pib); //lê o valor do pib

    printf("Digite a área em km²: ");
    scanf("%f", &areakm); // lê a área em km²

    printf("Código da carta: %s\n", codigocarta); // mostra o código da carta
    printf("Estado: %s\n", estado); // mostra o estado
    printf("Cidade: %s\n", nomecidade); // mostra o nome da cidade
    printf("População total: %d\n", populacao); // mostra a população
    printf("Pontos turísticos: %d\n", pontoturistico); // mostra os pontos turísticos
    printf("PIB: $%f\n", pib); // mostra o valor do pib
    printf("Área total: %f km²\n", areakm); // mostra o total da área

    return 0; // finaliza o programa com sucesso
}
