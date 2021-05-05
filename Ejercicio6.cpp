//Angie Alexandra Pino Huarsaya

/******************************************** EJERCICIO 6 ************************************************/
/*Implemente una función que reciba un arreglo de cadenas y su tamaño y ordene lexicográficamente dicho arreglo.*/

#include <iostream>
#include <string.h>
using namespace std;
void orden(const char *cadenas[], int tam){
	const char *aux;
	for(int i=0;i<tam-1;i++){
		for(int j=i+1;j<tam;j++)
			if ( strcmp(cadenas[i], cadenas[j]) > 0 ) { //strcmp compara las cadenas caracter x caracter
				aux = cadenas[i];
				cadenas[i] = cadenas[j];
				cadenas[j] = aux;
			}
	}
}
int main(){
	const char *cadenas[]={"Alejandro","Manuel","Fabrizio","Ismael","Alexander","Cid","Yeymy","Camila", "Juan", "Joshua"};
	int tam= sizeof(cadenas) / sizeof(cadenas[0]);
	orden(cadenas,tam);
	cout<<"El arreglo de cadenas ordenando es: "<<endl;
	for( int i=0; i<tam; i++)
		cout<<"\n"<<cadenas[i];
	return 0;
}
