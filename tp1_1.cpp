#include <stdio.h>

int main() {
    int num = 3, *pNum;

    pNum = &num;

    printf("Contenido del puntero: %p\n", *pNum);
    printf("Direccion de memoria almacenada por el puntero: %p\n", pNum);
    printf("Direccion de memoria de la variable: %p\n", &num);
    printf("Direccion de memoria del puntero: %p\n", &pNum);
    printf("Tamaño de memoria utilizado por la variable: %d\n", sizeof(num));

    printf("Hola mundo");
    return 0;
}