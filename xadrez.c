#include <stdio.h>

void movimentotorre (int torre){
    if (torre > 0){
        printf("Direita\n");
        movimentotorre(torre - 1);
    }
}
void movimentorainha (int rainha){
    if (rainha > 0){
        printf("Esquerda\n");
        movimentorainha(rainha - 1);
    }
}
void movimentobispo (int bispo){
    if (bispo > 0){
        movimentobispo (bispo - 1);
        printf("Direita\n");
    }
}
void movimentocavalo (int cavalo){
    if (cavalo > 0){
        printf("Direita\n");
    }
}
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

//int torre = 5, bispo = 5, rainha = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

   /* while (bispo <= 5)
{
    printf("BISPO %d CASAS DIAGONAL SUPERIOR DIREITA (while)\n", bispo); // Imprime movimento Bispo usando while
    bispo++;
}

/*for (bispo = 0; bispo < 5; bispo++){
    printf("BISPO %d CASAS DIAGONAL SUPERIOR DIREITA (for)\n", bispo); // Imprime movimento Bispo usando for
}

do{
    printf("BISPO %d CASAS DIAGONAL SUPERIOR DIREITA (do-while)\n\n",bispo ); //Imprime o movimento da Bispo usando do-while
    bispo++;
} while (bispo <= 5);*/

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.


/*while (torre <= 5)
{
    printf("TORRE %d CASAS DIREITA (while)\n", torre); // Imprime movimento Torre usando while
    torre++;
}*/

/*for (torre = 0; torre < 5; torre++){
    printf("TORRE %d CASAS DIREITA (for)\n", torre); // Imprime movimento Torre usando for
}

/*do{
    printf("TORRE %d CASAS DIREITA (do-while)\n\n", torre ); //Imprime o movimento da Torre usando do-while
    torre++;
} while (torre <= 5);*/

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

/* while (rainha <= 8)
    {
        printf("RAINHA %d CASAS PARA ESQUERDA (while)\n", rainha); // Imprime movimento Rainha usando while
        rainha++;
    }
    
    for (rainha = 0; rainha < 8; rainha++){
        printf("RAINHA %d CASAS PARA ESQUERDA (for)\n", rainha); // Imprime movimento Rainha usando for
    }*/
    
    /*do{
        printf("RAINHA %d CASAS PARA ESQUERDA (do-while)\n\n", rainha ); //Imprime o movimento da Rainha usando do-while
        rainha++;
    } while (rainha <= 8);*/

    // Nível Aventureiro - Movimentação do Cavalo

    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

/* printf("#### MOVIMENTO DO CAVALO####\n");
for (int i = 1; i <= 1; i++) //movimentação horizontal
{
    int cavalo = 1;
    while(cavalo <= 2) // movimentação vertical
{
    printf("BAIXO\n"); //imprimindo movimento para baixo
    cavalo++;
}
    printf("ESQUERDA\n"); // imprime movimento para esquerda
} */

    // Nível Mestre - Funções Recursivas e Loops Aninhados

    // Sugestão: Substitua as movimentações das peças por funções recursivas.

    // Movimento Bispo usando Recursividade e loops aninhados
    printf("#### MOVIMENTO BISPO ####\n");

    movimentobispo(5);
printf("\n");
     for( int i = 1; i <= 5; i++){
        for( int j = 1; j <= 5; j++){
            printf("Cima [%d],[%d]\n", i,j);
        }
        printf("\n");
    }
        
    // Movimento Torre usando Recursividade
    printf("#### Movimento Torre ####\n");
    movimentotorre(5);
    
    // Movimento Rainha usando Recursividade
    printf("\n#### Movimento Rainha ####\n");
    movimentorainha(8);
    
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

printf("#### Movimentação do Cavalo ####\n");

for( int i = 0, j = 1; i < j; i++, j--){
    printf("Cima [%d],[%d]\n", i,j);
}
movimentocavalo(1);
    return 0;
}
