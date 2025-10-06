#include <stdio.h>
#include <locale.h>
int main(){
    // Linha adicionada para habilitar acentos (Localidade Portugu�s)
    setlocale(LC_ALL, "Portuguese");

    int opcao,a,b;
    char  repete;
do{
printf("===============================\n");
printf("    Calculadora Simples\n");
printf("===============================\n");
printf("Selecione uma opera��o:\n");
printf("1. Adi��o\n");
printf("2. Subtra��o\n");
printf("3. Multiplica��o\n");
printf("4. Divis�o\n");
printf("5. Sair\n");
printf("Op��o: "); // Acento na Op��o
scanf("%d",&opcao);
printf("\n");
if(opcao<1  || opcao>5 ) {
        printf("Erro: selecione a op��o novamente\n"); // Acento na Op��o
        continue;
}
else if(opcao==5){
    printf("Obrigado por usar a calculadora! At� a pr�xima.\n"); // Acento na Pr�xima
    return 0;
}
else {
printf("Digite o primeiro n�mero: "); // Acento no N�mero
scanf("%d",&a);
printf("Digite o segundo n�mero: "); // Acento no N�mero
scanf("%d",&b);
}
if(opcao==1) printf("Resultado: %d + %d = %d\n",a,b,a+b);
else if(opcao==2) printf("Resultado: %d - %d = %d\n",a,b,a-b);
else if(opcao==3) printf("Resultado: %d * %d = %d\n",a,b,a*b);
else if(opcao==4) {
        if(b!=0) printf("Resultado: %d / %d = %d\n",a,b,a/b);
        else printf("Erro: Divis�o por zero n�o � permitida.\n"); // Acento no Divis�o
}

 do {
            printf("\nDeseja realizar outra opera��o? (s/n): "); // Acento na Opera��o

            scanf(" %c", &repete);
            printf("\n");

            if(repete == 'n' ){
                printf("Obrigado por usar a calculadora! At� a pr�xima.\n"); // Acento na Pr�xima
                return 0; // Encerra o programa
            } else if(repete != 's' ) {
                printf("Resposta inv�lida. Por favor, digite 's' para sim ou 'n' para n�o.\n"); // Acento no Inv�lida
            }
        } while (repete != 's' );

}while(repete != 'n');
}
