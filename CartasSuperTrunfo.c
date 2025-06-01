#include <stdio.h>

int main(){

char cidade01[20], cidade02[20], estado01[3], estado02[3];
int populacao01, populacao02, pontos01, pontos02, opcao01, opcao02, opcao03, resultado01, resultado02, primeiroAtributo, segundoAtributo;
float area01, area02, pib01, pib02;


float densidade01, densidade02, per_capita01, per_capita02;
// float super_poder01, super_poder02;                                  //Será feito no futuro
//float propriedades01, propriedades02, propriedades03, propriedades04;

    printf("*.*.*.*.*| MENU PRINCIPAL |*.*.*.*.*\n"); // Titulo de "Menu".
    
    printf("\n");

    printf("1. Iniciar Jogo\n");
    printf("2. Ver regras\n");    
    printf("3. Sair\n");
    printf("Escolha uma opção para prosseguir: ");
    scanf("%d", &opcao01);
    printf("\n");

        switch (opcao01)
        {
        case 1:
            printf("*.*.* INICIANDO JOGO! *.*.*\n");
            printf("\n");
            break;
        case 2:
            printf("Regras do Jogo: \n");
            printf("\n");
            printf("° O Jogo é composto por 2 (Duas) cartas sendo uma para cada jogador.\n");
            printf("° O Usuário deverá inserir manualmente as informações das cartas. \n");
            printf("° Após inserir os dados, você irá escolher quais atributos a serem comparados e assim decidir o vencedor.\n");
            printf("\n");
            printf("* Jogo em fase de desenvolvimento. *\n");
            printf("\n");
            printf("Divirta-se!\n");
            
            printf("\n");
            break;

            case 3:
            printf("Saindo do jogo.\n");
            printf("\n");
            break;
        
        default:
        printf("Opção inválida.\n");
            break;
        }


 // Primeira carta
 // Aqui será inserido os dados da primeira carta pelo usuário. 

    printf("Insira os dados da primeira carta!\n");

    printf("Digite o estado: ");
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

    densidade01 = populacao01 / area01;
    per_capita01 = pib01 * 1000000000.0 / (float)populacao01;

    printf("\n"); // Foi utilizado para saltar linha, tornando o programa mais limpo.

 // Segunda carta
 // Aqui será inserido os dados da segunda carta pelo usuário.

    printf("Insira os dados da segunda carta!\n");

    printf("Digite o estado: ");
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

    densidade02 = populacao02 / area02;         // sera feito a divisao entre população e area para dar o resultado de Densidade populacional
    per_capita02 = (pib02 * 1000000000.0/ (float)populacao02); // sera feita  a divisao de pib por populacao para dar resultado no Per Capita
    // Pib per capita multiplicado por 1.000.000.000 para o resultado ser impresso em 2 casas decimais sem erro

    printf("\n"); // Foi utilizado para saltar linha, tornando o programa mais limpo.

 // Aqui é a área de impressão das duas cartas inseridas pelos usuários.

    printf("Carta 1\n");
    printf("Estado: %s\n", estado01);
    printf("Código: %s01\n", estado01);
    printf("Nome da cidade: %s\n", cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f Km²\n", area01);
    printf("PIB: %.2f Bilhões de reais.\n", pib01);
    printf("Número de Pontos Turísticos: %d\n\n", pontos01);
    printf("Densidade Populacional: %.2f\n", densidade01);
    printf("Pib Per capita: %.2f\n", per_capita01);

    printf("\n"); // Foi utilizado para saltar linha, tornando o programa mais limpo.

    printf("Carta 2\n");
    printf("Estado: %s\n", estado02);
    printf("Código: %s02\n", estado02);
    printf("Nome da cidade: %s\n", cidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f Km²\n", area02);
    printf("PIB: %.2f Bilhões de reais.\n", pib02);
    printf("Número de Pontos Turísticos: %d\n\n", pontos02);
    printf("Densidade Populacional: %.2f\n", densidade02);
    printf("Pib Per capita: %.2f\n", per_capita02);

    printf("\n"); //Salto de linha

     //Aqui daremos inicio a Comparação de cartas

    printf("********_ Hora da batalha! _********\n");

    printf("\n"); //Salto de linha

    //faremos a comparacao da populacao
    printf("Comparação de cartas (Atributo: População).\n"); 
    printf("\n"); // salto de linha
    printf("Carta 1 - %s : %d\n", cidade01, populacao01);
    printf("Carta 2 - %s : %d\n", cidade02, populacao02);

    if (populacao01 > populacao02){
        printf("Carta 1 (%s) Venceu!\n", cidade01);
    }else {
        printf("Carta 2 (%s) Venceu!\n", cidade02);
    }
    printf("\n"); //Salto de linha

    // aqui sera feito a comparacao de densidade populacional
    printf("Comparação de cartas (Atributo: Densidade Populacioanal).\n"); 
    printf("\n"); // salto de linha
    printf("Carta 1 - %s : %.2f\n", cidade01, densidade01);
    printf("Carta 2 - %s : %.2f\n", cidade02, densidade02);

    if (densidade01 < densidade02){
        printf("Carta 1 (%s) Venceu!\n", cidade01);
    }else {
        printf("Carta 2 (%s) Venceu!\n", cidade02);
    }

    printf("\n"); //Salto de linha
    
    // aqui sera feito a comparacao de Pontos turisticos

    printf("Comparação de cartas (Atributo: Pontos turísticos).\n"); 
    printf("\n"); // salto de linha
    printf("Carta 1 - %s : %d\n", cidade01, pontos01);
    printf("Carta 2 - %s : %d\n", cidade02, pontos02);
    
    if (pontos01 > pontos02){
        printf("Carta 1 (%s) Venceu!\n", cidade01);
    }else {
        printf("Carta 2 (%s) Venceu!\n", cidade02);
    }

    printf("\n"); //Salto de linha.
    
    //Aqui será feita as comparações escolhidas pelo usuário através do menu utilizando estruturas aninhadas e switch.

    // Iniciaremos mostrando ao usuário as opções

    printf("*.*.*.*.*| MENU |*.*.*.*.*\n"); // Titulo de "Menu".
    
    printf("\n"); // salto de linha.
    
    printf("1. Iniciar Comparações\n");
    printf("2. Ver regras\n");    
    printf("3. Sair\n");
    printf("Escolha uma opção para prosseguir: ");
    scanf("%d", &opcao02);

    printf("\n"); //Salto de linha.

        switch (opcao02)
        {
        case 1:
            printf("*.*.*.*.*| INICIANDO COMPARAÇÃO! |*.*.*.*.*\n");
             printf("\n");  //Salto de linha
            printf("Escolha o primeiro atributo a ser comparado.\n");
             printf("\n");  //Salto de linha
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. Produto interno bruto (PIB)\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. Pib Per Capita");

             printf("\n");   //Salto de linha
            
             printf("Digite a opção: ");
            scanf("%d", &primeiroAtributo);
            
            printf("\n");   //Salto de linha

            //Inicio do Switch que fará o direcionamento de acordo com a escolha do usuário.
                switch (primeiroAtributo)
                {
                case 1:
                    printf("Você escolheu População.\n");
                    resultado01 = populacao01 > populacao02 ? 1 : 0;
                    
                    break;
        
                case 2:
                    printf("Opção 2, Área escolhida.\n");
                    resultado01 = area01 > area02 ? 1 : 0;
                    break;

                case 3:
                    printf("Opção 3, Pib escolhido.\n");
                    resultado01 = pib01 > pib02 ? 1 : 0;
                    break;
                    
                    case 4:
                    printf("Opção 4, Pontos Turísticos escolhido.\n");
                    resultado01 = pontos01 > pontos02 ? 1 : 0;
                    break;

                    case 5:
                    printf("Opção 5, Densidade Populacional escolhido.\n");
                    resultado01 = densidade01 < densidade02 ? 1 : 0;
                    break;

                    case 6:
                    printf("Opção 6, Pib Per Capita escolhido.\n");
                    resultado01 = per_capita01 > per_capita02 ? 1 : 0;
                    break;

                    default:
                    printf("Opção de jogo inválida.\n");
                    break;
                    }

           
            case 2:        
                    printf("*.*.*.*.*| Regras do jogo |*.*.*.*.*");
                    printf("\n"); //salto de linha
                    printf("° Aqui será feito as comparações de atributos escolhidos pelo usuário. \n");
                    printf("° O jogador deverá escolher um unico atributo.\n");
                    printf("\n"); //Salto de linha
                    break;

            default:
                    printf("Opção inválida!\n");
                    break;
            }
            printf("\n");  // Salto de linha
            // aqui será feito a segunda escolha de atributo pelo usuário.
            printf("Escolha o segundo atributo a ser comparado.");

            printf("\n"); // salto de linha

           switch (segundoAtributo)
            
           printf("\n");  //Salto de linha

            printf("1. População\n");
            printf("2. Área\n");
            printf("3. Produto interno bruto (PIB)\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade Populacional\n");
            printf("6. Pib Per Capita");

             printf("\n");   //Salto de linha
            
             printf("Digite a opção: ");
            scanf("%d", &segundoAtributo);
            
            printf("\n");

            if (primeiroAtributo == segundoAtributo)
            {
                printf("Você escolheu o mesmo atributo!\n");
            } else {
                switch (segundoAtributo)
                     
                {
                case 1:
                    printf("Você escolheu População.\n");
                    resultado02 = populacao01 > populacao02 ? 1 : 0;
                    
                    break;
        
                case 2:
                    printf("Opção 2, Área escolhida.\n");
                    resultado02 = area01 > area02 ? 1 : 0;
                    break;

                case 3:
                    printf("Opção 3, Pib escolhido.\n");
                    resultado02 = pib01 > pib02 ? 1 : 0;
                    break;
                    
                    case 4:
                    printf("Opção 4, Pontos Turísticos escolhido.\n");
                    resultado02 = pontos01 > pontos02 ? 1 : 0;
                    break;

                    case 5:
                    printf("Opção 5, Densidade Populacional escolhido.\n");
                    resultado02 = densidade01 < densidade02 ? 1 : 0;
                    break;

                    case 6:
                    printf("Opção 6, Pib Per Capita escolhido.\n");
                    resultado02 = per_capita01 > per_capita02 ? 1 : 0;
                    break;

                    default:
                    printf("Opção de jogo inválida.\n");
                    break;
                    }

                    printf("\n");
                    // Será verificado o vencedor das comparações entre carta 1 e carta 2.
                    if (resultado01 && resultado02)
                    {
                        printf("Parabéns, Você venceu!\n");

                    } else if {(resultado01 != resultado02
                        printf("Você empatou!\n");

                    } else {
                        printf("Infelizmente você perdeu!\n");
                    }
           
            }
 return 0;

}



