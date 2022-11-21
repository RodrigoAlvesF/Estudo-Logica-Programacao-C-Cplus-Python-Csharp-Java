#include <bits/stdc++.h>

using namespace std;

int main()

{

    int primeiro, segundo, terceiro;

    cout << "Primeiro valor: ";
    cin >> primeiro;
    cout << "Segundo valor: ";
    cin >> segundo;
    cout << "Terceiro valor: ";
    cin >> terceiro;


    if ( primeiro < segundo)
    {
        cout << "Menor: " << primeiro;
    }

    else if ( segundo < terceiro)
    {
        cout << "Menor: " << segundo;
    }

    else 
    {
        cout << "Menor: " << terceiro;
    }
    
    return 0;
}