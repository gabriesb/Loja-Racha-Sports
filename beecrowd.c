#include <stdio.h>
#include <string.h>



void roupas() {
    
    char nomes[][50] = {
        "Camisa do Valentino FC",
        "Camisa do Bratelona FC",
        "Camisa do Meral Idrid FC",
        "Camisa do Brasil",
        "Camisa do Amarantino"
    };

    int numNomes = sizeof(nomes) / sizeof(nomes[0]);

    for (int i = 0; i < numNomes; i++) {
        printf("%s\n", nomes[i]);
    }
    
}


int main(){ 
    

    int quantidade, numero_da_peca, iniciar, cont = 1, i, atualizar_estoque, new;
    float preco;  
    char roupas_da_loja[50], tamanho_da_roupa, comecar;
    int em_estoque_todos_tamanhos[5] = { 
        20, 30, 10 , 14, 5
    };
    int em_estoque_p[5] = {
        5, 10, 5, 0, 5
    };
    int em_estoque_M[5] = {
        5, 10, 0, 7, 0
    };
    int em_estoque_G[5] = {
        5, 10, 0, 0, 0
    };
    int em_estoque_GG[5] = {
        5, 0, 5, 7, 0
    };
    
    printf("--Bem-vindo ao sistema da loja Racha Sports, aperte [1] para procurar os produtos ou [2] para o estoque: ");
    scanf("%d", &iniciar);
    getchar();

    if (iniciar == 1){ 
        printf("\n---Selecione as peças abaixo--- \n");
        roupas();
        printf("Peças enumeradas de 1 até 5 (de cima para baixo)\n");
        printf("Deseja visitar o estoque? (Tecle [S] para sim, para encerrar o programa tecle [N]\n");
        scanf("%c", &comecar);
        if (comecar == 'N'){ 
            printf("Encerrando o programa...\n");
            return 0;
        }
    }if (iniciar == 2 || comecar == 'S' ){ 
        
            printf("O que deseja atualizar? (Tecle o Número da Peça (1---5): ");
            scanf("%d", &atualizar_estoque);
            if (atualizar_estoque == 1){ 
                printf("Camisa do Valentino FC\n");
                printf("Quantidade atual do produto: %d\n", em_estoque_todos_tamanhos[0]);
                printf("Quantidade em cada tamanho (P, M, G e GG): %d, %d, %d, %d", em_estoque_p[0], em_estoque_M[0], em_estoque_G[0], em_estoque_GG[0]);
                printf("\nInsira a nova quantidade do produto: \n");
                scanf("%d", &new);
                em_estoque_todos_tamanhos[0] = new;
                printf("\n Quantidade atualizada para: %d\n", em_estoque_todos_tamanhos[0]);
            }
            if (atualizar_estoque == 2){ 
                printf("Camisa do Bratelona FC\n");
                printf("Quantidade atual do produto: %d\n", em_estoque_todos_tamanhos[1]);
                printf("Quantidade em cada tamanho (P, M, G e GG): %d, %d, %d, %d", em_estoque_p[1], em_estoque_M[1], em_estoque_G[1], em_estoque_GG[1]);
                printf("\nInsira a nova quantidade do produto: \n");
                scanf("%d", &new);
                em_estoque_todos_tamanhos[1] = new;
                printf("\n Quantidade atualizada para: %d\n", em_estoque_todos_tamanhos[1]);
            }
            if (atualizar_estoque == 3){ 
                printf("Meral Idrid FC\n");
                printf("Quantidade atual do produto: %d\n", em_estoque_todos_tamanhos[2]);
                printf("Quantidade em cada tamanho (P, M, G e GG): %d, %d, %d, %d", em_estoque_p[2], em_estoque_M[2], em_estoque_G[2], em_estoque_GG[2]);
                printf("\nInsira a nova quantidade do produto: \n");
                scanf("%d", &new);
                em_estoque_todos_tamanhos[2] = new;
                printf("\n Quantidade atualizada para: %d\n", em_estoque_todos_tamanhos[2]);
            }
            if (atualizar_estoque == 4){ 
                printf("Camisa do Brasil\n");
                printf("Quantidade atual do produto: %d\n", em_estoque_todos_tamanhos[3]);
                printf("Quantidade em cada tamanho (P, M, G e GG): %d, %d, %d, %d", em_estoque_p[3], em_estoque_M[3], em_estoque_G[3], em_estoque_GG[3]);
                printf("\nInsira a nova quantidade do produto: \n");
                scanf("%d", &new);
                em_estoque_todos_tamanhos[3] = new;
                printf("\n Quantidade atualizada para: %d\n", em_estoque_todos_tamanhos[3]);
            }
            if (atualizar_estoque == 5){ 
                printf("Camisa do Amarantino\n");
                printf("Quantidade atual do produto: %d\n", em_estoque_todos_tamanhos[4]);
                printf("Quantidade em cada tamanho (P, M, G e GG): %d, %d, %d, %d\n ", em_estoque_p[4], em_estoque_M[4], em_estoque_G[4], em_estoque_GG[4]);
                printf("\nInsira a nova quantidade do produto: \n");
                scanf("%d", &new);
                em_estoque_todos_tamanhos[4] = new;
                printf("\n Quantidade atualizada para: %d\n", em_estoque_todos_tamanhos[4]);
            }


        
    }





    return 0;
}