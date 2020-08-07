#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeroSecreto = 0;
    int miNumero = 0;

    srand (time(NULL));

    numeroSecreto = rand() % 10 + 1;

    do
    {
        cout << "Adivina el numero entre 1 - 10: ";
        cin >> miNumero;

        if (numeroSecreto < miNumero)
        {
            cout << "El numero secreto puede ser menor" << endl;

        }
        else
        {
            if (numeroSecreto >miNumero)
            {
                cout << "El numero secreto es mayor" << endl;
            }
        }
        
    } while (numeroSecreto != miNumero);

    cout << "Adivinaste";
    
    return 0;
}
