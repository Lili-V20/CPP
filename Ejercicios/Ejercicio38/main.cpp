#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    system ("cls");

    for (int i = 5; i <= 100; i = i + 5)
    {
        cout << i << endl;

        for (int j = 1; j  < 5; j++) 
        {
            cout << j << endl;
        }
        for (int b = 1; b  < 3; b++) 
        {
            cout << b << endl;
        }
        if (i==25){
            break;
        }       

        if (i==25){
            break;
        }

        if (i==25){
            break;
        }
    }

    int i = 5;
    while (i <= 100)
    {
        cout << i << endl;
        i = i + 5;
            
            int j = 0;

            while (j <= 5)
            {
                if (j == 25){
                  break;  
                }
                j++;
            }
            
        
        if (i == 25){
            break;
        }

    }

    int i = 5;
    do
    {
        cout << endl;
        i --;

    } while (i == -1);
    
    int j = 5;
    while (j == -1)
    {
        cout << j << endl;
        j --;
    }

    int nota = 69;
    bool aprobo = nota > 69;

    if (nota > 69)
    {
        aprobo = true; 
    }else {
        aprobo = false;
    }
    
    while (nota > 69)
    {
        cout << "aporobo ";
    }
    cout << aprobo;

    int a = 5;
    int b = 10;

    if (a == 5 || b == 7){
        cout << "a o b, es verdadero ";
    }


    return 0;
}
