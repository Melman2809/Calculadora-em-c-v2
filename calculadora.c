#include <stdio.h>
#include <locale.h>
#include <ctype.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    setlocale(LC_ALL, ".UTF8");

    int opcao;
    float a, b;
    char repete;

    do {
        printf("===============================\n");
        printf("    Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");

        if (scanf("%d", &opcao) != 1) {
            printf("\nErro: Entrada inválida. Por favor, digite um número de 1 a 5.\n\n");
            limpar_buffer();
            continue;
        }
        limpar_buffer();
        printf("\n");

        if (opcao == 5) {
            break;
        }

        if (opcao < 1 || opcao > 4) {
            printf("Erro: Opção inválida. Tente novamente.\n\n");
            continue;
        }

        printf("Digite o primeiro número: ");
        if (scanf("%f", &a) != 1) {
            printf("\nErro: Número inválido. Tente novamente.\n\n");
            limpar_buffer();
            continue;
        }
        limpar_buffer();

        printf("Digite o segundo número: ");
        if (scanf("%f", &b) != 1) {
            printf("\nErro: Número inválido. Tente novamente.\n\n");
            limpar_buffer();
            continue;
        }
        limpar_buffer();
        printf("\n");

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f + %.2f = %.2f\n", a, b, a + b);
                break;
            case 2:
                printf("Resultado: %.2f - %.2f = %.2f\n", a, b, a - b);
                break;
            case 3:
                printf("Resultado: %.2f * %.2f = %.2f\n", a, b, a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Resultado: %.2f / %.2f = %.2f\n", a, b, a / b);
                } else {
                    printf("Erro: Divisão por zero não é permitida.\n");
                }
                break;
        }

        do {
            printf("\nDeseja realizar outra operação? (s/n): ");
            scanf(" %c", &repete);
            repete = tolower(repete);
            limpar_buffer();

            if (repete != 's' && repete != 'n') {
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            }
        } while (repete != 's' && repete != 'n');

        printf("\n");

    } while (repete == 's');

    printf("Obrigado por usar a calculadora! Até a próxima.\n");

    return 0;
}
