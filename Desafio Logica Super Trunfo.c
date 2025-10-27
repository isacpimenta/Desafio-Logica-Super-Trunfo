#include <stdio.h>

int main() {
    // Declaração dos atributos das duas cartas
    int forca1, velocidade1, inteligencia1;
    int forca2, velocidade2, inteligencia2;
    int escolha, resultado;

    printf("=== SUPER TRUNFO - TECHNOVA EDITION ===\n\n");

    // Entrada dos atributos da primeira carta
    printf("Digite os atributos da Carta 1:\n");
    printf("Forca: ");
    scanf("%d", &forca1);
    printf("Velocidade: ");
    scanf("%d", &velocidade1);
    printf("Inteligencia: ");
    scanf("%d", &inteligencia1);

    // Entrada dos atributos da segunda carta
    printf("\nDigite os atributos da Carta 2:\n");
    printf("Forca: ");
    scanf("%d", &forca2);
    printf("Velocidade: ");
    scanf("%d", &velocidade2);
    printf("Inteligencia: ");
    scanf("%d", &inteligencia2);

    // Menu interativo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Forca\n");
    printf("2 - Velocidade\n");
    printf("3 - Inteligencia\n");
    printf("4 - Comparar dois atributos\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    // Estruturas de decisão e comparação
    switch (escolha) {
        case 1:
            printf("\n--- Comparando FORCA ---\n");
            if (forca1 > forca2)
                printf("Carta 1 venceu!\n");
            else if (forca2 > forca1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("\n--- Comparando VELOCIDADE ---\n");
            if (velocidade1 > velocidade2)
                printf("Carta 1 venceu!\n");
            else if (velocidade2 > velocidade1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("\n--- Comparando INTELIGENCIA ---\n");
            if (inteligencia1 > inteligencia2)
                printf("Carta 1 venceu!\n");
            else if (inteligencia2 > inteligencia1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("\n--- Comparando DOIS ATRIBUTOS (Forca + Velocidade) ---\n");
            // Soma de dois atributos e comparação com operador ternário
            resultado = (forca1 + velocidade1) > (forca2 + velocidade2) ? 1 :
                        (forca1 + velocidade1) < (forca2 + velocidade2) ? 2 : 0;

            if (resultado == 1)
                printf("Carta 1 venceu pela combinacao de atributos!\n");
            else if (resultado == 2)
                printf("Carta 2 venceu pela combinacao de atributos!\n");
            else
                printf("Empate!\n");
            break;

        default:
            printf("\nOpcao invalida. Tente novamente.\n");
    }

    printf("\n=== Fim da partida! ===\n");
    return 0;
}

