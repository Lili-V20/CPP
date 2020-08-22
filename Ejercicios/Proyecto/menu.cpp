#include <iostream>
 #include "snake.h"
 #include "pacman.h"
 #include "menu.h"
 #include "nave.h"
 #include <stdio.h>
 
 using namespace std;

 void menu () {
     bool salir = false;
     while (salir == false){

    int opcion = 0;

        system("color 0B");
		cout << "&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
		cout << "&& MENU DE JUEGOS SOLI &&" << endl;
		cout << "&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;
		
		cout << endl;
		cout << "1 - SNAKE" << endl;
        cout << endl;
		cout << "2 - PAC-MAN" << endl;
        cout << endl;
        cout << "3 - NAVE" << endl;
        cout << endl;
		cout << "0 - SALIR" << endl;

        cout << endl;
        cout << endl;
        cout << "INGRESE UN NUMERO Y PRESIONE ENTER: ";
        cout << endl;
        cin >> opcion;

        if (opcion == 0){
			break;
		}


        switch (opcion)
        {
        case 1:
            snake();
            break;
        case 2:
            pacman();
            break;
        case 3:
            nave();
            break;
        default:
            break;
        }
    }

}