2

# Guía de Uso: Archivo .gitignore

Este documento detalla la importancia, el momento de implementación y la configuración técnica del archivo `.gitignore` dentro de un flujo de trabajo con Git.

---

## ¿Por qué es conveniente incluirlo?

Es conveniente usarlo al archivo .gitignore para que no se suban archivos innesesarior para el usuario, y que contengan datos que nos lleguen a perjudicar.

## ¿Cuándo se debe hacer?

Se debe crear en el mismo momento en el que inicia el repositorio. `git init`

## ¿Cómo configurar el archivo .gitignore?
*  `*`  Comodín para cualquier carácter  `*.log` (ignora todos los archivos .log) 
*  `!` Excepción (no ignorar)  `!config.log` (mantiene este archivo específico) 
*  `**`  Directorios recursivos  `**/temp/` (ignora carpetas 'temp' en cualquier nivel) 
*  `/`  Anclaje o directorio 

## para ignorar un archivo txt 

si deseo ignorar el archivo ignorado.txt solamente de la carpeta principal pondria
`/ignorado.txt` en el `.gitignore`

si se desea ignorarlo del repositorio completo escribiria `ignorado.txt` en el `.gitignore`

# Sobre el código misterioso

## Funcion invertirNum
Esta funcion realiza la inversión de los dígitos de un número a través de su puntero.
utiliza la operacion matematica `rev = (rev * 10) + (temp % 10);` para guardar en la variable `rev` el ultimo digito del numero ingresado.
Tambien utiliza `temp = temp / 10;` para eliminar el ultimo digito del numero ingresado, por que ya lo guardo en `rev`. Hara eso hasta haber invertido el numero completo y luego el puntero apunta a la direccion de la variable `rev` donde esta guardado el numero invertido.

## Funcion divNum
Esta funcion divide en 2 el numero ingresado.
Utiliza la siguiente operacion `*p = *p / 2;`.

## Funcion sumarDigAlNum
Esta funcion suma los digitos del numero ingresado y a su ves los suma al numero ingresado por ej: `123 | 1+2+3 = 6 | 123+6=129`
En la variable `temp` se guarda el numero ingresado y se declara una variable `suma=0`.
Luego se usa la siguiente operacion matematica `suma = suma + (temp % 10);` guarda en `suma` el ultimo digito del numero ingresado, luego se usa la siguiente operacion matematica `temp = temp / 10;` que elimina el ultimo digito del numero ingresado.
Hara eso hasta que `temp=0`.

# Sobre el código sin funcionar.

Faltaba archivo de cabecera `#include <stdio.h>`
Errores de sintaxis faltaban `;` en la linea 17 del codigo y en la linea 23.
En el `scanf` no estaba especificando en que direccion se debe guardar el valor ingresado.
En la llamada a la funcion `duplicar_numero(&valor1)` que recibe una direccion, le faltaba el `&` para enviar la direccion de variable al puntero.
La operacion dentro de la funcion `duplicar_numero(int *numero)` es de la forma `*numero = *numero * 2;`
