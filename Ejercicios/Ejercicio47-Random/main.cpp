#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;
    srand (time(NULL));

    for (int i = 0; i < 20; i++)
    {
        numero = rand() % 100 + 1;
        cout <<  "Primer numero al azar: " << numero << endl;

    }
     
    return 0;
}
