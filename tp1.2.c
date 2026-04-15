#include <stdio.h>

//invierte los numeros solamente si al a es mayor al b
void orden(int *a, int *b){
    int Aux = *b;
    if(*a > *b){
        *b = *a;
        *a = Aux;
    }
}
//invierte el contenido de la variables entre si
void Invertir(int *a,int *b){
    int aux = *b;
    *b = *a;
    *a = aux;
}
//funcion void que devuelve el cuadrado de un numero
void cuadradoVoid(int *num){
   *num *= *num; 
}
//funcion con return que devuelve el cuadrado de un numero
int cuadrado (int num){
    return num * num;
}

int main(){
    int numero1, numero2;
    int resultado;
    printf("ingrese un numero entero: ");
    scanf("%i",&numero1);
    printf("\n\ningrese otro numero entero: ");
    scanf("%i",&numero2);

    resultado = cuadrado(numero1);
    printf("\nmuestra el numero 1 elevado al cuadrado \n");
    printf("numero 1: %i\n", resultado);

    cuadradoVoid(&numero1);
    printf("\nmuestra el numero 1 elevado al cuadrado\n ");
    printf("numero 1: %i\n", numero1);

    Invertir(&numero1, &numero2);
    printf("\ninvierte los numeros\n");
    printf("numero 1: %i\n numero 2: %i", numero1, numero2);

    orden(&numero1, &numero2);
    printf("\nel numero mas grande se guarda en el numero 2\n");
    printf("numero 1: %i\n numero 2: %i", numero1, numero2);
    return 0;
}

