#include <stdio.h>
#include <string.h>
#include <math.h>

int main()

{
    int idade, contador, soma;
    double media;

    soma = 0;
    contador = 0;

    printf("Digite as idades: \n");

    scanf("%d", &idade);

    while (idade >= 0)

        {

            contador = contador + 1;
            soma = soma + idade;
            scanf("%d", &idade);

        }

    if ( contador == 0)
    {

        printf("IMPOSSIVEL CALCULAR! ");

    }

    else

    {

        media = (double)soma / contador;

        printf("Media: %.2lf", media);

    }

    return 0;
}
