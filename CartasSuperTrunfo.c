#include <stdio.h>

int main(){

char cidade01[20], cidade02[20], estado01[3], estado02[3];
int populacao01, populacao02, pontos01, pontos02;
float area01, area02, pib01, pib02;
//variaveis separadas para melhor visualização do trabalho
float densidade01, densidade02, per_capita01, per_capita02;           //Atualização jogo super trunfo


 // Primeira carta
 // Aqui será inserido os dados da primeira carta pelo usuário. 

    printf("Insira os dados da primeira carta!\n");

    printf("Digite o estado (A ou B): ");
    scanf(" %s", estado01);
    
    printf("Digite a cidade: ");
    scanf(" %s", cidade01);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao01);

    printf("Digite a área da cidade: ");
    scanf("%f", &area01);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib01);

    printf("Quantos pontos turisticos a cidade possui: ");
    scanf("%d", &pontos01);

    densidade01 = populacao01 / area01; //Atualização jogo super trunfo / aventureiro
    per_capita01 = pib01 * 1000000000.0 / (float)populacao01; //Atualização jogo super trunfo / aventureiro

    printf("\n"); // Foi utilizado para saltar linha, tornando o programa mais limpo.

 // Segunda carta
 // Aqui será inserido os dados da segunda carta pelo usuário.

    printf("Insira os dados da segunda carta!\n");

    printf("Digite o estado (A ou B): ");
    scanf(" %s", estado02);

    printf("Digite a cidade: ");
    scanf(" %s", cidade02);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao02);

    printf("Digite a área da cidade: ");
    scanf("%f", &area02);

    printf("Digite o PIB: ");
    scanf("%f", &pib02);

    printf("Quantos pontos turisticos a cidade possui: ");
    scanf("%d", &pontos02);

    densidade02 = populacao02 / area02; //Atualização jogo super trunfo
    per_capita02 = pib02 * 1000000000.0/ (float)populacao02;

    printf("\n"); // Foi utilizado para saltar linha, tornando o programa mais limpo.

 // Aqui é a área de impressão das duas cartas inseridas pelos usuários.

    printf("*** Carta N°1 ***\n\n");
    printf("Estado: %s\n", estado01);
    printf("Código: %s01\n", estado01);
    printf("Nome da cidade: %s\n", cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f Km²\n", area01);
    printf("PIB: %.2f Bilhões de reais\n", pib01);
    printf("Número de Pontos Turísticos: %d\n", pontos01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade01); //Atualização jogo super trunfo / aventureiro
    printf("Pib Per capita: %.2f reais\n", per_capita01); //Atualização jogo super trunfo / aventureiro 

    printf("\n"); // Foi utilizado para saltar linha, tornando o programa mais limpo.

    printf("*** Carta N°2 ***\n\n");
    printf("Estado: %s\n", estado02);
    printf("Código: %s02\n", estado02);
    printf("Nome da cidade: %s\n", cidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f Km²\n", area02);
    printf("PIB: %.2f Bilhões de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", pontos02);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade02); //Atualização jogo super trunfo / aventureiro
    printf("Pib Per capita: %.2f reais\n", per_capita02); //Atualização jogo super trunfo / aventureiro


return 0;

}