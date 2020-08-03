#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 10;
    int c = 4;
    if (a > b && b > c){
        cout << "a es mayor que c o mayor que b";
    }

    while (a > b){
        a -- ;

        if (a == 20){
            break;
        }
    }

    while (true){
        while(true){
            if (a == 10){
                break;
            }
        }
        b++;
        if (a == 1){
        break;
        }
        a++;
    }

    return 0;
}
