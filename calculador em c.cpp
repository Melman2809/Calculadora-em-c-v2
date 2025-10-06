#include <stdio.h>
#include <locale.h>
int main(){
    // Linha adicionada para habilitar acentos (Localidade Português)
    setlocale(LC_ALL, "Portuguese");

    int opcao,a,b;
    char  repete;
do{
printf("===============================\n");
printf("    Calculadora Simples\n");
printf("===============================\n");
printf("Selecione uma operação:\n");
printf("1. Adição\n");
printf("2. Subtração\n");
printf("3. Multiplicação\n");
printf("4. Divisão\n");
printf("5. Sair\n");
printf("Opção: "); // Acento na Opção
scanf("%d",&opcao);
printf("\n");
if(opcao<1  || opcao>5 ) {
        printf("Erro: selecione a opção novamente\n"); // Acento na Opção
        continue;
}
else if(opcao==5){
    printf("Obrigado por usar a calculadora! Até a próxima.\n"); // Acento na Próxima
    return 0;
}
else {
printf("Digite o primeiro número: "); // Acento no Número
scanf("%d",&a);
printf("Digite o segundo número: "); // Acento no Número
scanf("%d",&b);
}
if(opcao==1) printf("Resultado: %d + %d = %d\n",a,b,a+b);
else if(opcao==2) printf("Resultado: %d - %d = %d\n",a,b,a-b);
else if(opcao==3) printf("Resultado: %d * %d = %d\n",a,b,a*b);
else if(opcao==4) {
        if(b!=0) printf("Resultado: %d / %d = %d\n",a,b,a/b);
        else printf("Erro: Divisão por zero não é permitida.\n"); // Acento no Divisão
}

 do {
            printf("\nDeseja realizar outra operação? (s/n): "); // Acento na Operação

            scanf(" %c", &repete);
            printf("\n");

            if(repete == 'n' ){
                printf("Obrigado por usar a calculadora! Até a próxima.\n"); // Acento na Próxima
                return 0; // Encerra o programa
            } else if(repete != 's' ) {
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n"); // Acento no Inválida
            }
        } while (repete != 's' );

}while(repete != 'n');
}
