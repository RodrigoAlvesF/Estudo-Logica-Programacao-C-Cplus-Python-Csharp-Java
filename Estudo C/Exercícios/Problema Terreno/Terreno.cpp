#include <stdio.h>

int main()

{
    double largura, comprimento, area, valor, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);

    area = largura*comprimento;
    printf("Area do terreno = %.2lf\n", area);

    preco = valor*area;
    printf("Preco do terreno = R$%.2lf\n", preco);

    return 0;

}

