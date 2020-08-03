#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;
    
    while (true)
    {
        system ("cls");

        cout << "***********";
        cout << "Menu";
        cout << "***********";

        cout << endl;
        cout << endl;

        cout << "1 - Bebidas calientes" << endl;
        cout << "2 - Bebidas heladas" << endl;
        cout << "3 - Reposteria" << endl;
        cout << "0 - salir" << endl;

        cout << endl;
        cout << "Ingrese una opcion entre 1 - 3: ";
        cin >> opcion;



        if (opcion == 0)
        {
            break;
        }

        if (opcion == 1)
        {
            system ("cls");
            cout << "*****************" << endl;
            cout << "Bebidas Heladas" << endl;
            cout << "*****************" << endl;

            system ("pause");
        }

        if (opcion == 2)
        {
            system ("cls");
            cout << "*****************" << endl;
            cout << "Bebidas Calientes" << endl;
            cout << "*****************" << endl;

            system ("pause");
        }

        if (opcion == 3)
        {
            system ("cls");
            cout << "**********" << endl;
            cout << "Reposteria" << endl;
            cout << "**********" << endl;

            system ("pause");
        }

        if (opcion < 0 || opcion > 3)
        {
            system ("cls");
            cout << "ingrese una opcion valida " << endl;
            system ("pause");
        }
        

    }


    return 0;
}
