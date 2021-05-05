//Angie ALexandra Pino Huarsaya

/******************************** EJERCICIO 1 ***********************************************/
/*Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los 
elementos de un arreglo.Tamaño del arreglo 1000000. (Iterativa y recursiva)*/

#include <iostream>
using namespace std;
//Funcion de la suma iterativa
long long suma_iterativa(long *arr,long tam){
	long long suma=0;
	for(int i=0; i<tam;suma+=arr[i++]);
	return suma;
}
//Funcion de la suma recursiva,divida en 2 partes,ya que colapsa usando el tamaño entero de 1000000
long long recursiva_parte1(long *arr, long tam, int cont, long suma, int max, int tam_2){
	 if(cont>=max/2){
        if(tam_2%2==0){
            return suma;
        }suma+=arr[tam/2];
        return suma;
    }
    suma+=arr[cont]+arr[tam-1-cont];
    cont++;
    return recursiva_parte1(arr, tam, cont, suma, max, tam_2);
}
long long suma_recursiva(long *arr, long tam, int cont, int suma){
    long long int prim=0, resultado=0, sec=1000;
    int num=1000;
    if(tam>num){
        for(int i=0; i<tam/num; i++, prim+= num/2, sec+= num){
            resultado += recursiva_parte1(arr, tam, prim , suma, sec, sec-2*prim);
        }if(tam%num==0){
            return resultado;
        }else{
            resultado += recursiva_parte1(arr, tam, prim , suma, tam , tam-2*prim);
        }
    }else{
        resultado = recursiva_parte1(arr, tam, cont, suma, tam, tam);
    }
    return resultado;
}
int main(){
	long tam=1000000, cont=0, suma=0;
	long *arr=new long[tam];
	//Nos da valores del 1 al 1000000 en el arreglo
	for(int i=0;i<tam;i++)
		arr[i]=i+1;
	//Muestra el arreglo(opcional)
	/*cout<<"Los valores en el arreglo son: ";	
	for(int i=0;i<tam;i++)
		cout<<" "<<arr[i];*/
	cout<<"\nITERATIVA: La suma de los elementos es: "<<suma_iterativa(arr,tam);
	cout<<"\nRECURSIVA: La suma de los elementos es: "<<suma_recursiva(arr,tam,cont,suma);
	return 0;
}
