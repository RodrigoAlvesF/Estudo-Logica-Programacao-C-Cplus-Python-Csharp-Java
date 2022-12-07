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

    int a, b, c;

    printf("Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    printf("Terceiro valor: ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        printf("MENOR = %d", a);
    }

    else if (b < c)
    {
        printf("MENOR = %d", b);
    }

    else
    {
        printf("MENOR = %d", c);
    }

    return 0;
}
