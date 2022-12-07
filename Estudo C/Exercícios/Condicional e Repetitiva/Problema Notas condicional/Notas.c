#include <stdio.h>
#include<math.h>
#include<string.h>

int main()

{
    double nota1, nota2, notafinal;


    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notafinal = nota1 + nota2;

    printf("NOTA FINAL = %.1lf", notafinal);

    if (notafinal < 60.00)    {
        printf("\nREPROVADO!");
    }
    else {
        printf("\nAPROVADO!");
    }

    return 0;

}
