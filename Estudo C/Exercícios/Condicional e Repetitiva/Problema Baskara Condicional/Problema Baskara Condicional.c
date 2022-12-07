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

    double A, B, C, X1, X2, delta;

    printf("Coeficiente A: ");
    scanf("%lf", &A);

    printf("Coeficiente B: ");
    scanf("%lf", &B);

    printf("Coeficiente C: ");
    scanf("%lf", &C);

    delta = (B * B) - (4 * (A * C));

    X1 = (-B + sqrt(delta)) / (2 * A);
    X2 = (-B - sqrt(delta)) / (2 * A);

    if (delta <0 || A==0) {
        printf("Esta equacao nao possui raizes reais");

    }

    else
    {
    printf("X1 = %.4lf\n", X1);
    printf("X2 = %.4lf", X2);
    }

    return 0;

}
