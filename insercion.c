#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//prototipos

#define TAM 10000
int generarEntero();
void llenarVector(int vector[],int limite);
void mostrarVector(int vector[],int limite);
int ingresarNumero();
int *asignarMemoria(int a);
void ejecutarPrograma();


int generarEntero(){
/*
	int numero= ingresarNumero();*/
	return (rand()%TAM+1);
}

void llenarVector(int vector[],int limite){
	int n;
	for (n = 0; n<limite; n++)
	{
		vector[n]=generarEntero();
	}
}
void mostrarVector(int vector[],int limite){
	int n;
	for (n = 0; n<limite; n++)
	{
		printf("%d,",vector[n]);
		if (n!=0 && n%12==0)
		{
			printf("\n");

		}
	}
}
int ingresarNumero(){
	int num;
	printf("Ingrese el tamaño de numeros a ordenar: \n" );
	scanf("%d",&num);
	return num;
}
int *asignarMemoria(int a){

	return (int *)malloc(a*sizeof(int));
}

void insertionSort(int arr[], int n) {
    int i, llave, j;
    for (i = 1; i < n; i++) {
        llave = arr[i]; // El elemento que queremos insertar
        j = i - 1;

        /* Movemos los elementos de arr[0..i-1] que son mayores que la llave
           a una posición adelante de su posición actual */
        while (j >= 0 && arr[j] > llave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = llave; // Insertamos la llave en su lugar
    }
}
void imprimirArreglo(int vector[], int n) {
	int i;
    for (i = 0; i < n; i++)
        printf("%d,",vector[i]);
		if (i!=0 && i%12==0)
		{
			printf("\n");

		}
}

void ejecutarPrograma(){
	int vector[TAM];
	llenarVector(vector,TAM);
	mostrarVector(vector,TAM);
	insertionSort(vector,TAM);
	imprimirArreglo(vector,TAM);
	/*
	int tamaño= ingresarNumero;
	int *numeros= asignarMemoria(TAM);*/
	printf("si jalo\n");
	
}
/*
int main(int n, char arreglo[])
{
	
	return 0;
}*/
int main(int argc, char const *argv[])
{
	srand(time(NULL));
	ejecutarPrograma();
	printf("ola\n");
	return 0;
}