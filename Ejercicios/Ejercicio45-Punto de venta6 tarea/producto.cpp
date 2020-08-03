#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{

    system ("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
        case 1:
        {
            
            cout << "******************" << endl;
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "******************" << endl;
            cout << "1 - Capuccino" << endl;
            cout << "2 - Expreso" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
                case 1:
                    agregarProducto("1 Capuccino - L40.00", 1, 40);
                    break;
                case 2:
                    agregarProducto("1 - Expresso - L30.00", 1, 30);
                    break;

                default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }        
            }

            cout << endl; 
            cout << "producto agregado" << endl << endl;
            system ("pause");

            break;
        }
        case 2:
        {
            cout << "**************" << endl;
            cout << "BEBIDAS FRIAS" << endl;
            cout << "**************"<< endl;
            cout << "1 - Coca-cola" << endl;
            cout << "2 - Pepsi" << endl;
            cout << "3 - Te frio" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
                case 1:
                    agregarProducto("1 - Coca-cola - L20.00", 1, 20);
                    break;
                case 2:
                    agregarProducto("1 - Pepsi - L18.00", 1, 18);
                    break;
                case 3:
                    agregarProducto("1 - Te Frio - L35.00", 1, 35);
                    break;
                
                default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
                    
            }

            cout << endl; 
            cout << "producto agregado" << endl << endl;
            system ("pause");

            break;
        }
        case 3:
        {
            cout << "***********" << endl;
            cout << "REPOSTERIA" << endl;
            cout << "***********" << endl;
            cout << "1 - Flan" << endl;
            cout << "2 - Pan de banano" << endl;
            cout << "3 - Tres leches" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
                case 1:
                    agregarProducto("1 - Flan - L35.00", 1, 35);
                    break;
                case 2:
                    agregarProducto("1 - Pan de banano - L40.00", 1, 40);
                    break;
                case 3:
                    agregarProducto("1 - Tres leches - L50.00", 1, 50);
                    break;

                default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl; 
            cout << "producto agregado" << endl << endl;
            system ("pause");

            break;
        }
    }
}
