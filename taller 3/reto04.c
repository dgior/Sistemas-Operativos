/**************************************************************************************
 * Fecha: 21/08/2025
 * Autor: Giovanny Andres Duran Renteria
 * Materia: Sistemas Operativos
 * Tema: Laboratorio reto04
*************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int n,i, *ptr, sum = 0;
  // Se toman la cantidad de numeros 
  printf("Enter number of elements: ");
  scanf("%d", &n);

  // Se reserva memoria pero inicizando los espacios en ceros
  ptr = (int*) calloc(n, sizeof(int));
  
  // Se revisa si el calloc si sirvio
  if(ptr == NULL){
    printf("Error! memory not allocated.");
    exit(0);
  }
  
  printf("Enter elements: ");
  //Se hace ciclo for para ir recibiendo numeros y para u sumando
  for(i = 0; i < n; ++i){
    scanf("%d", ptr + i);   
    sum += *(ptr + i);
  }
  
  printf("Sum = %d", sum);   // Imprime la suma total
  
  // Se libera la memoria
  free(ptr);
  return 0;
}

