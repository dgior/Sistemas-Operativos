/**************************************************************************************
 * Fecha: 21/08/2025
 * Autor: Giovanny Andres Duran Renteria
 * Materia: Sistemas Operativos
 * Tema: Laboratorio reto01
*************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Se usa malloc para reservan 100 espacios
    char *p = malloc(100);
    char *q = malloc(100);

    // Se imprime la direccion de memoria de
    printf("Address of p = %p\n", (void*)p);

    // Se pone dentro de p un mensaje
    strcpy(p, "Hello, I'm the best in Operating Systems!!!");

    // Se muestra lo que hay en p
    printf("%s\n", p);

    // Aviso antes de copiar un mensaje en q
    printf("About to copy \"Goodbye\" to q\n");

    // Se pone un mensaje en q
    strcpy(q, "Goodbye");
  
    printf("String copied\n");

    // Se imprime lo que dentro de q
    printf("%s\n", q);

    // Se libera la memoria de p y q
    free(p);
    free(q);

    return 0;
}


