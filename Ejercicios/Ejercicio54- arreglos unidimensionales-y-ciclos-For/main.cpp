#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[5];
    //int indice = 3;
    //numeros [indice] = 50;
    //cout << numeros[indice] << endl;

    for (int i = 0; i < 5; i++)
    {
        numeros[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << numeros[i] << endl;
    }
    
    

    numeros[0] = 10;
    numeros[1] = 5;
    numeros[2] = 7;
    numeros[3] = 50;
    numeros[4] = 2;

    cout << numeros[0] << endl;
    cout << numeros[1] << endl;
    cout << numeros[2] << endl;
    cout << numeros[3] << endl;
    cout << numeros[4] << endl;
    

    return 0;
}