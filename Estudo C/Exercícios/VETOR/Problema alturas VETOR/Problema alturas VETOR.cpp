#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()

{

    int n, i, contador, contadorporcentagem;
    double media, porcentagem, somaaltura, menor;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idade[n];
    double altura[n];
    contador = 0;
    somaaltura = 0;
    contadorporcentagem = 0;

    for ( i = 0; i < n; i++)
    {
        printf("Dados da %da pessoa: \n", i + 1);
        printf("Nome: ");
        limpar_entrada();
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);

        contador = contador + 1;
        somaaltura = somaaltura + altura[i];
    }


    for (i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            contadorporcentagem ++;
        }
    }

    media = somaaltura / contador;
    menor = (contadorporcentagem / n) * 100;

    printf("\nAltura media: %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", menor);

    for ( i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            printf("%s\n", nomes[i]);
        }

    }


    return 0;
}
