#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0;
    double numeroRaizCuadrada = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    numeroRaizCuadrada = sqrt(numero);

    cout << endl;
    cout << "La Raiz cuadrada de " << numero << " es: " << numeroRaizCuadrada;
    cout << endl;
    
    system ("pause");
    return 0;
}
