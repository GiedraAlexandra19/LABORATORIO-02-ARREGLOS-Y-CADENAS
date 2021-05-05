//Angie Alexandra Pino Huarsaya

/************************************EJERCICIO 4 *******************************************/
//Implemente una funci�n que reciba una cadena y retorne su tama�o. (Iterativa y recursiva)

#include <iostream>
#include <string.h>
using namespace std;
//Funcion que retorna el tama�o de la cadena iterativamente
int tamano_iterativa(char cadena[]){
	int tam=0;
	char *cad;
	cad=cadena;
	while(*cad!='\0'){
		tam++;
		cad++;
	}	
	return tam;	
}
//Funcion que retorna el tama�o de la cadena recursivamente
int tamano_recursiva(char cadena[], int i){
	if(cadena[i]=='\0'){
		return i++;
	}i++;
	return tamano_recursiva(cadena,i);
}
int main(){
	char cadena[]="HOLA MUNDO";
	cout<<"ITERATIVA: Tama�o de la cadena: "<<tamano_iterativa(cadena);
	cout<<"\nRECURSIVA: Tama�o de la cadena: "<<tamano_recursiva(cadena,0);
	return 0;
}
