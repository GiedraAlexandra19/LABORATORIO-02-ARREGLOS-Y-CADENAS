//Angie Alexandra Pino Huarsaya

/*************************************** EJERCICIO 2 *************************************************/
/*Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva). 
Tamaño del arreglo 1000000.*/

#include <iostream>
using namespace std;
//Funcion para invertir de forma iterativa un arreglo
void invertir_iterativa(long *arr, int tam){
	int j=tam-1;
	long aux=0;
	for(int i=0;i<tam/2;i++){
		aux=arr[i];
		arr[i]=arr[j-i];
		arr[j-i]=aux;
	}
	for(int i=0;i<tam;i++)
		cout<<" "<<arr[i];
}
//Funcion para invertir de forma recursiva un arreglo
void invertir_recursiva(long *arr,int tam){
	if(tam>=0){
		invertir_recursiva(arr,tam-1);
	}	
}
int main(){
	int tam=1000000;
	long *arr=new long[tam];
	for(int i=0;i<tam;i++)
		arr[i]=i+1;
	cout<<"ITERATIVA:Los elementos ivertidos son: ";
	invertir_iterativa(arr,tam);
	cout<<"\nRECURSIVA:Los elementos ivertidos son: ";
	invertir_recursiva(arr,tam);
	for(int i=0;i<tam;i++)
			cout<<" "<<arr[i];
	return 0;
}

