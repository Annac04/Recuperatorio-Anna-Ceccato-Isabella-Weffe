#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int opcion;
	double num1, num2, resultado;
	char key;
	
	do {
		cout << "calculadora" << endl;
		cout << "1. sumar" << endl;
		cout << "2. restar" << endl;
		cout << "3. multiplicar" << endl;
		cout << "4. dividir" << endl;
		cout << "seleccione una opcion del 1 al 4" << endl;
		cin >> opcion;
		
	cout<< "ingrese el primer numero que desee calcular" << endl;
	cin >> num1;
	cout<< "ingrese el segundo numero que desee calcular"<< endl;
	cin >> num2;
	
	switch (opcion) {
		case 1:
		resultado= num1+num2;
		cout << "el resultado de la suma es de " << resultado << endl;
		break;
		
		case 2:
		resultado= num1-num2;
		cout << "el resultado de la resta es de " << resultado << endl;
		break;
		
		case 3:
		resultado= num1*num2;
		cout << "el resultado de la resta es de " << resultado << endl;
		break;
		
		case 4:
		if (num2 !=0) {
		resultado= num1/num2;
		cout << "el resultado de la division es de " << resultado << endl;
		} else {
			cout << "no se puede dividir por 0" << endl;
		}
		break;
		
		default:
		cout << "ingrese un numero que sea valido" << endl;
	}
	
	cout << "si desea continuar ingrese la letra n, sino ingrese cualquier otra" << endl;
	cin >> key;
	
} while (key == 'n'|| key == 'N') ;

return 0;
}
