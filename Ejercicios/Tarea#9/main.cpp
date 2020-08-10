#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void lanzamiento(int cantidad)
{

    if(cantidad == 1)
    {
        cout << "Presione \"ENTER\" para lanzar el dado 1 ";
    
    }
    else
    {
        cout << "Presione \"ENTER\" para lanzar el dado 2 ";
    }
    cin.ignore();
    
}

int Lanzador()
{
    int numero;
    srand (time(0));
    numero = rand () % 6 + 1;
    cout << "Obtuviste " << numero << endl;
    return numero;
}

int dado (int pdado, int sdado)
{
    cout << "has avanzado " << pdado + sdado << " casillas" << endl;
    cout << endl;
    return pdado + sdado;
}

int main(int argc, char const *argv[])
{
    int total, primerDado, segundoDado;

    lanzamiento (1);
    primerDado = Lanzador();
    lanzamiento (2);
    segundoDado = Lanzador();
    total = dado(primerDado, segundoDado);
    
    return 0;
}
