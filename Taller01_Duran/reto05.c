/**************************************************************************************
 * Fecha: 21/08/2025
 * Autor: Giovanny Andres Duran Renteria
 * Materia: Sistemas Operativos
 * Tema: Laboratorio
*************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int *ptr, i, n1, n2;

  //SE guarda el tamaño
  printf("Enter size: ");
  scanf("%d", &n1); 

  // Aqui reserva memomia con malloc
  ptr = (int*) malloc(n1 * sizeof(int));

  printf("Addresses of previously allocated memory: ");
  // Un ciclo for para mostrar las direcciones de memoria en c
  for(i = 0; i < n1; ++i)
    printf("\n\np = %p\n", ptr+i);

  printf("\n Enter the new size: ");
  scanf("%d", &n2);

  // se reasigna la memoria con la funcion de relloc
  ptr = realloc(ptr, n2 * sizeof(int));

  printf("Addresses of newly allocated memory: ");
  // Ciclo for para mostrar las direcciones con la nueva reasginacion de la memoria
  for(i = 0; i < n2; ++i)
    printf("\n\np = %p\n", ptr+i);

  //Por ultimo se libera la memoria
  free(ptr);
  return 0;
}
