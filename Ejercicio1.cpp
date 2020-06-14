#include<iostream>

using namespace std;

//Funcion para calcular el salario total
float salariototal(int horastrabajadas, int horasextra);
//Funcion para calcular el salario real cuando el salario total es menor que 500 
float salarioreal1(int horastrabajadas, int horasextra); 
//Funcion para calcular el salario real cuando el salario total es mayor o igual que 500 
float salarioreal2(int horastrabajadas, int horasextra);

int main(){

	int i, empleados, horastrabajadas, horasextra; //Declarando variables
	float salarioR;
	
	cout<<"CALCULO DE SALARIO MENSUAL DE SUS EMPLEADOS\n\n";
	
	cout<<"Ingrese la cantidad de empleados que tiene la empresa: ";
	cin>>empleados; //Solicitando la cantidad N de los empleados
	
    //Repitiendo procedimientos para N cantidad de empleados
	for( i=1; i<=empleados; i++ ){
		cout<<"Ingrese las horas trabajadas del empleado: ";
		cin>>horastrabajadas;
		
		cout<<"Ingrese las horas extra trabajadas del empleado: ";
		cin>>horasextra;
		
		if (salariototal(horastrabajadas,horasextra) < 500){
			
			salarioR = salarioreal1(horastrabajadas,horasextra);
			
		}
		else if(salariototal(horastrabajadas,horasextra) >= 500){
			
			salarioR = salarioreal2(horastrabajadas,horasextra); 
		}
		   cout<<"El salario total es: "<<salariototal(horastrabajadas,horasextra)<<endl;
		   cout<<"El salario real es: "<<salarioR<<endl;
	}
    return 0;
}	
//Definiendo la funcion para calcular el salario total
float salariototal(int horastrabajadas, int horasextra){
	float salario1;
	
	salario1 = (horastrabajadas)*(1.75) + (horasextra)*(2.50);
	
	return salario1;
}
//Definiendo la funcion para calcular el salario real cuando el salario total es menor que 500
float salarioreal1(int horastrabajadas, int horasextra){
	
	float salario2;
	
	salario2 = ((horastrabajadas)*(1.75) + (horasextra)*(2.50));
	
	salario2 = salario2*0.96; //Por descuento de seguro social
	salario2 = salario2*0.9375; //Por descuento de AFP
	
	return salario2;
}
//Definiendo la funcion para calcular el salario real cuando el salario total es mayor o igual que 500
float salarioreal2(int horastrabajadas, int horasextra){
	float salario3;
	
	salario3 = ((horastrabajadas)*(1.75) + (horasextra)*(2.50));
	
	salario3 = salario3*0.96; //Por descuento de seguro social
	salario3 = salario3*0.9375; //Por descuento de AFP
	salario3 = salario3*0.9; //Por descuento de impuesto sobre la renta
	
	return salario3;
}
	