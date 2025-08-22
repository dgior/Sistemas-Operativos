/**************************************************************************************
 * Fecha: 21/08/2025
 * Autor: Giovanny Andres Duran Renteria
 * Materia: Sistemas Operativos
 * Tema: Laboratorio reto03
*************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int *ptr; // Se declara un entero que apunta a "basura"

  ptr = malloc(15 * sizeof(*ptr)); // Se reserva memoria para ptr usando malloc

  if(ptr != NULL){
     *(ptr+5) = 480; // Se asigna el valor 480 a la posicion 5 del arreglo
  }


  printf("Cadena copiada\n");
  free(ptr);

  return 0;
}
