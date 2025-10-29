#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
	int numerosecreto, intento, intentos=0;
	char key;
	
	do {
		srand (time(0));
		numerosecreto= rand () % 100 + 1;
		
		cout << "juego de adivinanza" << endl;
		cout <<"Adivina el numero secreto entre 1 y 100" << endl;
		cout << "tienes 5 intentos" << endl;
		
		while (intentos<5) {
			cout << "intento " << (intentos + 1) << endl;
			cin >> intento;
			 if (intento == numerosecreto) {
			 	cout << "Correcto. Adivinaste el numero" << endl;
			 	break;
			 } else if (intento > numerosecreto + 10) {
			 	cout << "muy alto" << endl;
			 } else if (intento > numerosecreto) {
			 	cout << "un poco alto" << endl;
			 } else if (intento < numerosecreto - 10) {
			 	cout << "muy bajo" << endl;
			 } else  {
			 	cout << "un poco bajo" << endl;
			 }
			 
			 intentos++;
		}
		
		if (intentos == 5 && intento !=numerosecreto) {
			cout << "se acabaron los intentos. El numero era:" <<numerosecreto << endl;
		}
		cout << "si desea continuar ingrese la letra n, sino ingrese cualquier otra" << endl;
	cin >> key;
	} while (key == 'n'|| key == 'N') ;
	
	return 0;
}

