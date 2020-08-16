#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string nombres[3] [2] =
    {
        {"Juan", "Perez"},
        {"Maria", "Martinez"},
        {"Pedro", "Jimenez"},
    };

    for (int i = 0; i < 3; i++)
    {
    for (int j = 0; j < 2; j++)
        {
            cout << nombres[i][j] << " ";
        }
        
        cout << endl;
    }
    


    return 0;
}
