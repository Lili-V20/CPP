#include <iostream>

using namespace std;

int numeroSecreto = 7;

void adivinasteNumeroSecreto(int miNumero)
{
    if (miNumero == numeroSecreto)
    {
        cout << "Adivinaste!" << endl;
    }
    else 
    {
        cout << "intento Fallido" << endl;

        int otroNumero = 0;
        cout << "Ingrese otro numero: ";
        cin >> otroNumero;
        adivinasteNumeroSecreto(otroNumero);
    }
}

int main(int argc, char const *argv[])
{
    adivinasteNumeroSecreto(5);
    return 0;
}
