#include <bits/stdc++.h>

using namespace std;

int main()

{

    int n, i;
    double medialtura, somaltura, menor, porcentagem;

    cout << "Quantas pessaos serao digitadas? ";
    cin >> n;

    int vet[n];
    string nome[n];
    int idade[n];
    double altura[n];

    for (i = 0; i < n; i++)
    {
        cout << "Dados da " << i+1 << "a pessoa: \n";
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline (cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];

    }

    somaltura = 0;

    for (i = 0; i < n; i++)
    {
        somaltura = somaltura + altura[i];
    }

    medialtura = somaltura / n;

    menor = 0;

    for (i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            menor = menor + 1;
        }
    }

    porcentagem = (menor / n) * 100;


    cout << fixed << setprecision(2);
    cout << "\n Altura media: " << medialtura;
    cout << fixed << setprecision(1);
    cout << "\nPessoas com menos de 16 anos: " << porcentagem << "%\n";

    for (i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            cout << nome[i] << endl;
        }
    }


    return 1;

}
