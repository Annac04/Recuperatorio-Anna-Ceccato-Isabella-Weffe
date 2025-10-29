#include <iostream>
using namespace std;

int main(){
	int saldo =500;
     int opcion; 

     int monto;
     char key;
do{
	while(true){
	cout <<"cajero automatico" << endl;
     cout <<"1.consultar saldo"<< endl;
     cout <<"2.retirar fondos"<< endl;
     cout <<"3.depositar fondos"<< endl;
     cout <<"4.salir" << endl;
     cout <<"seleccione una opcion"<< endl;
     cin>> opcion;
if( opcion==1){
	 cout <<"saldo actual:"<< saldo << endl;
}
else  if (opcion == 2) {
	cout << "ingrese el monto:"<< monto << endl;
cin >>monto;
if ( monto <= saldo){
	saldo= saldo-monto;
     cout<< "retiro exitoso"<< endl;
} else{ 
cout << "fondo  insuficiente" << endl;

}
}else if (opcion==3) {

cout << "ingrese el monto a depositar"<< endl;
cin >> monto;
saldo= saldo + monto; 
cout << "deposito exitoso" <<endl;
}else if (opcion==4) {
cout << "Gracias por usar el cajero automatico"<< endl;
break;

} else {
	cout << "opcion invalida" << endl;
}

cout << "si desea continuar ingrese la letra 'n', sino ingrese cualquier otra" << endl;
cin >> key;
} 
}while (key == 'n' || key == 'N');

return 0;

}
 
     








	
 
