#include <bits/stdc++.h>

using namespace std;

int main()

{

    int n, contagem, i, j;

    cout << "Qual a ordem da matriz ? ";
    cin >> n;

    int mat[n][n];

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "Diagonal Principal: \n";

    for (i = 0; i < n; i++)
    {
            cout << mat[i][i] << " ";
    }

    contagem = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (mat[i][j] < 0)
            {
                contagem = contagem + 1;
            }

        }

    }

    cout << "\nQuantidade de negativos = " << contagem;




    return 0;
}
