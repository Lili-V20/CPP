#include <iostream>

using namespace std;

void menu()
{

    int opcion = 0;

    while (true)
    {
        cout << "*****";
        cout << "MENU";
        cout << "*****";
        cout << endl;
        cout << endl;
        cout << endl;

        system ("cls");
        
        cout << "1 - BEBIDAS CALIENTES" << endl;
        cout << "2 - BEBIDAS FRIAS" << endl;
        cout << "3 - REPOSTERIA" << endl;
        cout << "0 - SALIR" << endl;

        cin >> opcion;

        if (opcion == 0)
        {
            break;
        }

    }

}
