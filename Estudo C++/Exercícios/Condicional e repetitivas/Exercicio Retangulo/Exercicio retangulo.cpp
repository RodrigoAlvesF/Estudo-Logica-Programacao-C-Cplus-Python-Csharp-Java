#include <bits/stdc++.h>

using namespace std;

int main()

{

    double base, altura, area, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt ((pow(base,2) + pow(altura,2)));

    cout << fixed << setprecision(4);

    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;
    cout << "Diagonal: " << diagonal << endl;

    return 0;

}
