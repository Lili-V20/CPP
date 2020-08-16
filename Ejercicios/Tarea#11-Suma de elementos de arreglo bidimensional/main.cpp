#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int sumar[5][5];
    int valorRando = 0;
    int totalSuma = 0;

    srand(time(NULL));

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            valorRando = rand() % 100 + 1;
            sumar[i][j] = valorRando;
            valorRando = 0;
            cout << sumar[i][j] << " ";
        }
        cout << endl;
        cout << endl;
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            totalSuma = sumar[i][j];
        }
        
    }
    cout <<endl;
    cout << "La suma de los elementos es: " << totalSuma <<endl;
    system("pause");
    return 0;
}
