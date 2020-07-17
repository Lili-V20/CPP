#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;
 	cout << endl;
 	
 	cout << "Ingrese el valor de b: ";
 	cin >> b;
 	cout << endl;
 	
 	cout << "Ingrese el valor c: ";
	cin >> c;
	cout << endl;
	
	if (a > b){
		if (a > c){
			cout << "a es el mayor";
		}
	} else {
		if (b > a){
			cout << "b es el mayor";
		} else {
			if (c > a){
				cout << "c es el mayor";
			}
			
		}
	}
	
	
	return 0;
}
