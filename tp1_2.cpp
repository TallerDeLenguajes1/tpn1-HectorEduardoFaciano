#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int cuadrado(int numero);
int cuadrado_void(int numero);
void direccion_contenido(int numero);
void invertir_numeros(int a, int b);
void orden_menor_mayor(int a, int b);

int main(){
    int entero, numero_a, numero_b;
    printf("Ingrese un numero: ");
    scanf("%d", &entero);
    cuadrado(entero);
    printf("\nFuncion Cuadrado void: %d\n", cuadrado_void(entero));
    direccion_contenido(entero);
    invertir_numeros(numero_a, numero_b);
    orden_menor_mayor(numero_a, numero_b);
    
    getch();
    return 0;
}

int cuadrado(int numero){
    numero = numero * numero;
    printf("\nFuncion Cuadrado: %d\n", numero);
    return 0;
} 

int cuadrado_void(int numero){
    int cuadrado_numero = 0;
    cuadrado_numero = numero * numero;
    return cuadrado_numero;
}

void direccion_contenido(int numero){
    printf("\n--Funcion Direccion--\nDireccion de memoria: %d\nContenido: %p\n", &numero, numero);
}

void invertir_numeros(int a, int b){
    printf("\n--Funcion Invertir--\n");
    printf("Ingrese primer numero: ");
    scanf("%d", &a);
    printf("Ingrese segundo numero: ");
    scanf("%d", &b);

    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("\nValor de A: %d\nValor de B: %d\n", a, b);
}

void orden_menor_mayor(int a, int b){
    printf("\n--Funcion Menor Mayor--\n");
    
    printf("Ingrese primer numero: ");
    scanf("%d", &a);
    printf("Ingrese segundo numero: ");
    scanf("%d", &b);
    
    if(a < b){
        printf("\nMenor: A = %d\nMayor: B = %d", a, b);
    }else if (a > b)
    {
        printf("\nMenor: B = %d\nMayor: A = %d", b, a);
    }else
    {
        printf("\nAmbos numeros son iguales y su valor es: %d", a);
    }
}