#include<iostream>

using namespace std;

/*No encontre una manera poder escribir la enie, por eso puse la palabra en ingles*/

int PBisiesto(int year); //Funcion para hacer las pruebas de cuando un year es bisiesto o no


int main(){
	
	int bisiesto; //Declarando variable 
	cout<<"Porgrama que verifica si un year es Bisiesto\n\n";
	
	cout<<"Ingrese el year que desea saber si es bisiesto o no: ";
	cin>>bisiesto; //Guardadndo el year ingresado por el usuario
	
    //Colocando condiciones para verificar que el year sea bisiesto o no
	if(PBisiesto(bisiesto) == 1){
		cout<<"El year "<<bisiesto<<" es bisiesto"<<endl;
	} 
	else {
		cout<<"El year "<<bisiesto<<" no es bisiesto"<<endl;
	}
	
	return 0;
}

//Definiendo la funcion para hacer las pruebas sobre si el year ingresado es bisiesto o no
int PBisiesto(int year){
	
	int bisiesto;
	
	if (year % 400 == 0){
		
		bisiesto = 1;
		
	}
	else{
		if(year % 100 == 0){
			bisiesto = 0;
		}
		else if (year % 4 == 0){
			bisiesto = 1;
		}
		else {
			bisiesto = 0;
		}
	}
	return bisiesto;
}