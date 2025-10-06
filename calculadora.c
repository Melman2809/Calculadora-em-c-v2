#include <stdio.h>
#include <locale.h>

int main() {
    // Nova tentativa: Configurando o locale para UTF-8.
    // Isso pode funcionar melhor em terminais modernos como o do VS Code.
    // IMPORTANTE: Se os acentos ainda não aparecerem, salve este arquivo com codificação UTF-8
    // e, antes de executar o programa, rode o comando 'chcp 65001' no seu terminal.
    setlocale(LC_ALL, ".UTF8");

    int opcao;
    float a, b; // Usando float para permitir números decimais e divisão correta
    char repete;

    do {
        // Menu de opções
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
        scanf("%d", &opcao);
        printf("\n");

        // Opção de sair
        if (opcao == 5) {
            break; // Sai do loop principal
        }

        // Validação da opção do menu
        if (opcao < 1 || opcao > 4) {
            printf("Erro: Opção inválida. Tente novamente.\n\n");
            continue; // Volta para o início do loop e mostra o menu de novo
        }

        // Leitura dos números
        printf("Digite o primeiro número: ");
        scanf("%f", &a);
        printf("Digite o segundo número: ");
        scanf("%f", &b);
        printf("\n");

        // Execução da operação
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

        // Pergunta se o usuário quer realizar outra operação
        do {
            printf("\nDeseja realizar outra operação? (s/n): ");
            scanf(" %c", &repete);

            if (repete != 's' && repete != 'n') {
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            }
        } while (repete != 's' && repete != 'n');

        printf("\n");

    } while (repete == 's');

    printf("Obrigado por usar a calculadora! Até a próxima.\n");

    return 0;
}