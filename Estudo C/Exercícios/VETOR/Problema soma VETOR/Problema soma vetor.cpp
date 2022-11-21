#include <stdio.h>
#include <string.h>
#include <math.h>

int main()

{

    int i, n;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nVALORES = ");

    for (i = 0; i < n; i++)
    {
        printf("%.1lf  ", vet[i]);
    }

    soma = 0;
    media = 0;

    for (i = 0; i < n; i++)
    {

        soma = soma + vet[i];

    }

    media = soma / n;
    
    printf("\nSOMA = %.2lf", soma);
    printf("\nMEDIA = %.2lf", media);

    return 0;

}
