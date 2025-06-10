#include <stdio.h>

        int main(){

            // MOVIMENTANDO A TORRE 5 CASAS PARA A DIREITA
            //TORRE LINHA RETA, CIMA OU LADO

            for (int torre = 0; torre <= 5; torre++) {
                printf("FRENTE %d \n", torre);        // IMPRIME A DIREÇÃO DO MOVIMENTO
            }
            
        printf("\n"); // Salto de linha

            // BISPO DIAGONAL 
            // BISPO IRÁ 5 CASAS À DIAGONAL DIREITA 

            int bispo ;

            while (bispo <= 5)
            {
                printf("DIREITA E CIMA %d \n", bispo); // IMPRIME A DIREÇÃO DO MOVIMENTO
                ++bispo;
            }
            
         printf("\n"); // Salto de linha
         
         int i;

            // RAINHA TODAS AS DIREÇÕES
            // RAINHA IRÁ 8 CASAS PARA A ESQUERDA

            do
            {
                printf("ESQUERDA %d \n", i); // IMPRIME A DIREÇÃO DO MOVIMENTO
                i++;

            } while (i <= 8);
            

        return 0;
    }