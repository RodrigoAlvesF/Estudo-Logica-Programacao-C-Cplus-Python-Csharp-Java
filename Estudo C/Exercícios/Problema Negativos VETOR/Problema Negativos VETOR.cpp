#include <stdio.h>
#include <string.h>
#include <math.h>

int main()

{

    int n, i, soma;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

    }

    printf("NUMEROS NEGATIVOS: \n");

    for (i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            printf("%.0d\n", vet[i]);
        }

    }

    return 0;

}