#include <iostream>

using namespace std;

int sumar (){
    return 5 +7;
}
string NombreCompleto(){
    string nombre = "Juan";
    string apellido = "Perez";
    return nombre + " " + apellido ;

}

int main(int argc, char const *argv[])
{
    int resultado = sumar();

    string nombreyapellido = NombreCompleto();

    cout << resultado;

    return 0;
}
