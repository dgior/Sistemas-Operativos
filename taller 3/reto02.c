/**************************************************************************************
 * Fecha: 21/08/2025
 * Autor: Giovanny Andres Duran Renteria
 * Materia: Sistemas Operativos
 * Tema: Laboratorio reto 2
*************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char *q = NULL; // Se declara un char que apunta a NULL

  // Se imprime que se necesita espacio para la palabra Goodbye
  printf("Requesting space for \"Goodbye\"\n");

  // Se reserva memoria para q usando malloc y se suma 1 para incluir el NULL
  q = (char *)malloc(strlen("Goodbye") + 1);

  // Verifica si el malloc estubo bien o hubo error
  if(!q){
    perror("Failed to allocate space because");
    exit(1);
  }

  // Se muestra la direccio de memoria donde apunta q
  printf("About the copy \"Goodbye\" to q at address %p \n", (void*)q);

  // Copia la cadena Goodbye a dodne apunta q
  strcpy(q, "Goodbye");
  printf("String copied\n");
  printf("%s\n", q); // Se imprime la cadena copiada
  return 0;
}
