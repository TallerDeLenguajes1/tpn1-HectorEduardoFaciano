#include <conio.h>
#include <stdio.h>
#include <string.h>

int main(){
    int x = 1, *punt;
    punt = &x;
    
    printf("Contenido del puntero: %d\n", *punt);
    printf("Direccion de memoria del puntero: %d\n", punt);
    printf("Direccion de la variable: %d\n", &x);
    printf("Direccion de memoria del puntero: %d\n", &punt); 
   	printf("Tamaño de memoria utilizado por esa variable: %d", sizeof(x));
    
    getch();
    return 0;
}
