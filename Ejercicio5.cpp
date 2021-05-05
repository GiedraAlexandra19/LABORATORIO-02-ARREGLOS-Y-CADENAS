//Angie Alexandra Pino Huarsaya

/******************************************* EJERCICIO 5 ******************************************************/
/*Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a).*/

#include <iostream>
#include <string.h>
using namespace std;
//Funcion para hallar el tamaño de las cadenas
int tamano(char cadena[]){
    int i;
	for(i=0;cadena[i]!='\0';i++);
    return i;
}
//Funcion para concatenar la cadena A en la cadena B
void concatenar(char cadenA[],char cadenB[]){
	int j;
    j=tamano(cadenB);
    for(int i=0;i<=tamano(cadenA);i++){
     	cadenB[j] = cadenA[i]; 
     	j++;
    }
}
int main(){
	char cadenA[]="la tierra les dice hola";
	char cadenB[]="Buenos dias estrellitas ";
	cout<<"Cadena A: "<<cadenA;
	cout<<"\nCadena B: "<<cadenB;
	concatenar(cadenA,cadenB);
	cout<<"\nLas cadenas concatenadas (A en B) da: "<<cadenB;
	return 0;
}
