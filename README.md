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

### para ignorar un archivo txt 

si deseo ignorar el archivo ignorado.txt solamente de la carpeta principal pondria
`/ignorado.txt` en el `.gitignore`

si se desea ignorarlo del repositorio completo escribiria `ignorado.txt` en el `.gitignore`

