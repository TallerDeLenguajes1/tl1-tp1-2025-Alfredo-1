// codigo_roto.c
#include <stdio.h>//agrego la libreria
void duplicar_numero(int *numero)/*lo que recibe es un puntero *numero*/ {
    *numero = *numero * 2;//la operacion es *numero = *numero*2;
}

int main() {
    int valor1;
    int valor2;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);//agrego & al valor1 para que scanf pueda guardar el valor a ingresar en esa direccion de variable

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2;//agrego ;
    printf("La suma es: %d\n", suma);

    duplicar_numero(&valor1);//envio la direccion del valor 1 a la funcion por que la funcion pide un puntero
    printf("El primer valor duplicado es: %d\n", valor1);

    return 0;//agrego ;
}