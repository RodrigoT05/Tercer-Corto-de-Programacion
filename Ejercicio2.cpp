#include<iostream>

using namespace std;

int main(){
	
	int i, Nmagico=28, numero; //Declarando variables

	
	cout<<"\nADIVINA EL NUMERO MAGICO\n\n";
	
	i = 5; //Inicializando la variable del contador en 5
	do{
		cout<<"Ingrese un numero: ";
		cin>>numero; //Guardando el numero ingresado por el usuario
		i--;  //Decrementando el contador en 1  
		

        //Aplicando condiciones
		if (i == 0){
			cout<<"\nTe has quedado sin intentos, suerte a la proxima.";
		}
		else if (numero > Nmagico){
		cout<<"\nEl numero que ingreso es mayor al Numero Magico.\n"<<endl;
		cout<<"\nSi quieres terminar el juego presiona 0.\n"<<endl;
		cout<<"\nIntentos restantes: "<<i<<endl<<endl;
		}
		else if (numero == 0){
			cout<<"\nGracias por Jugar.";
		}
		else if (numero < Nmagico){
			cout<<"\nEl numero que ingreso es menor al Numero Magico.\n"<<endl;
			cout<<"\nSi quieres terminar el juego presiona 0.\n"<<endl;	
			cout<<"\nIntentos restantes: "<<i<<endl<<endl;
		}
		else if (numero == Nmagico){
			cout<<"\nFelicidades! el numero que ingreso es el Numero Magico.\n"<<endl;
		}
		
		
	}while(numero != 0 && numero != Nmagico && i != 0); 

	
	return 0;
}