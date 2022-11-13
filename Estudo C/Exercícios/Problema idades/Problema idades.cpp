#include<stdio.h>
#include<string.h>
#include<math.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}


int main()

{
    char nome1[15], nome2[15];
    int idade1, idade2;
    float media;
    
    printf("Dados da primeira pessoa: \n");

    printf("Nome: ");
    ler_texto(nome1, 15);

    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da primeira pessoa: \n");

    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome2, 15);

    printf("Idade: ");
    scanf("%d", &idade2);

    media = (double)(idade1 + idade2) / 2;

    limpar_entrada();

    printf("A idade media de %s e %s e de %.1f anos.", nome1, nome2, media);
    
    return 0;

}
