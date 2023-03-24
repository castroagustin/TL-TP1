#include <stdio.h>

int cuadrado(int a);
void cuadradoVoid(int a);
void direccionVar(int a);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main() {
    int a = 40, b = 29;

    direccionVar(a);
    direccionVar(b);

    orden(&a, &b);

    direccionVar(a);
    direccionVar(b);

    return 0;
}

int cuadrado(int a) {
    return a * a;
}

void cuadradoVoid(int a) {
    printf("Cuadrado de %d: %d\n", a, a * a);
}

void direccionVar(int a){
    printf("Direccion de memoria: %p\n", &a);
    printf("Contenido: %d\n", a);
}

void invertir(int *a, int *b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}