// implementar las funciones de libprueba.h aca

// imprime un saludo: Hola, name (name es el arg)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void saludar(char *name) {
  printf("Hola, %s\n",name );

}

// devuelve la enesima potencia de dos
int potencia_de_dos (int n) {
int potencia =1;
   for (int i = 1; i <= n; i++) {
    potencia = potencia*2;
  }
  return potencia;
}

// imprime un array de enteros de dimension size
int print_array(int r[], int dimension){
  for (int i = 0; i < dimension; i++) {
    printf("%d ",r[i] );
  }
}

// pone el resultado de u + v en result
// todos vectores de dimension n
void suma_vectorial(int u[], int v[], int r[], int dimension) {
for (int i = 0; i < dimension; i++) {
  r[i]=u[i]+ v[i];
 }
}

// realiza un cifrado por desplazamiento usando el entero key
// como cantidad de letras a desplazar
void cifrar(){}
