// escribir un programa que diga "Hola, x" donde x
// es un argumento (string)
// usar la funcion saludar de libprueba.h
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  
int main(int argc, char const *argv[]) {
  saludar(argv[1]);
  return 0;
}
