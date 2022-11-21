#include <stdio.h>
#include <string.h>
#include <math.h>

int main()

{

    int n, contagem;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", mat[i][i]);
    }

    contagem = 0;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            if (mat[i][j] < 0)
            {
                contagem ++;
            }

        }

    }

    printf("\nquantidade de negativos: %d", contagem);


    return 0;
}
