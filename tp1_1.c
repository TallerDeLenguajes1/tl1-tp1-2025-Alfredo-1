#include <stdio.h>
int main(){
    printf("Hola Mundo");
    int num = 20;
    int *p;
    p = &num;

    //mostrar por pantalla
    printf("\ncontenido puntero p: %d\n",*p);
    printf("direccion de memoria almacenada por el puntero p: %p\n",p);
    printf("direccion de memoria de la variable num: %p\n",&num);
    printf("direccion de memoria del puntero p: %p\n",&p);
    printf("tamaño de memoria utilizado por la variable num: %d bytes\n",sizeof(num));


    return 0;
}