#include <iostream>
#include <cmath>

using namespace std;
int main(){
	char opcion;
	double radio, resultado;
	cout<<"¿Que deseas calcular? a = area, p = perimetro \n";cin >> opcion ;
	cout<<"ingrese el radio del circulo \n";cin >> radio;
	if (opcion == 'a'|| opcion == 'A'){
		resultado = M_PI * pow(radio,2);
			cout<<"el area del circulo es \n"<< resultado << endl; 
	}
	else if (opcion == 'p'|| opcion == 'P'){
		resultado = 2 * M_PI * radio;
			cout<<"el perimetro del circulo es \n"<< resultado << endl; 
}
else {
			cout<<"opcion no valida \n"<< endl; 
}
	return 0;
}
