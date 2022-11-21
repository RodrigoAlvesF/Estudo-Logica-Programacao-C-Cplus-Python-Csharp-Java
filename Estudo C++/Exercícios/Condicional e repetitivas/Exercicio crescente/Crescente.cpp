#include <bits/stdc++.h>

using namespace std;

int main()

{

    int x, y;

    cout << "Digite dois numeros: " << endl;
    cin >> x;
    cin >> y;

    while ( x != y)
    {

        if (x > y)
        {
            cout << "DECRESCENTE! " << endl;
        }

        else
        {
            cout << "CRESCENTE! " << endl;
        }

        cout << "Digite outros dois numeros: " << endl;

        cin >> x;
        cin >> y;

    }

    return 0;
}
