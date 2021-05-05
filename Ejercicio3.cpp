//Angie Alexandra Pino Huarsaya

/********************************************** EJERCICIO 3 **********************************************/
//Implementar una función que ordene los elementos de un arreglo: ascendente. Tamaño del arreglo 1000000.

#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
//Funcion para ordenar el arreglo de forma ascendente
void ascendente(long *arr,int tam){
	long aux;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam;j++){
			if(arr[i]<arr[j]){
				aux=arr[i];
				arr[i]=arr[j];
				arr[j]=aux;}
		}
	}for(int i=0;i<tam;i++)
		cout<<" "<<arr[i];	
}
int main(){
	int tam=1000000;
	long *arr=new long[tam];
	//Genera aleatoriamente entre numeros del 1 al 20
	srand(time(NULL));
	for(int i=0;i<tam;i++)
		arr[i]=rand()%20;
	cout<<"El arreglo inicial es: ";
	for(int i=0;i<tam;i++)
		cout<<" "<<arr[i];	
	cout<<"\nEl arreglo en forma ascendente es: ";
	ascendente(arr,tam);
	return 0;
}
