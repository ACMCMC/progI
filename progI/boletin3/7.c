/*ENUNCIADO

Escribir un programa que lea un texto almacenado nun arquivo, encriptado de acordo ca técnica
descrita antes, descifre tal texto e o presente descifrado por pantalla. Empregar unha función para o
desencriptado. Para desencriptar hai que sumarlle 128 á resta de códigos e despois cacular o
módulo 128*/

/*Autor: Aldán Creo Mariño
Data: 28 de outubro de 2019
Versión: 1
Este programa traballa con datos encriptados*/

#define EXIT_SUCCESS 0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib_aldan.h"

int main(){

  char encriptado[100], desencriptado[100];
  FILE *arq, *arch_saida;

  printf("Introduza o nome do arquivo co texto encriptado: ");
  arq = abrir_arquivo("r");
  printf("Introduza o nome do arquivo de saida: ");
  arch_saida = abrir_arquivo("w");

  fgets(encriptado,100,arq);
  
  printf("%s, %d caracteres\n",encriptado,strlen(encriptado));

  desencriptar(encriptado,desencriptado);

  printf("%s",desencriptado);

  fprintf(arch_saida,"%s",desencriptado);

  fclose(arq);
  fclose(arch_saida);

  return(EXIT_SUCCESS);
}
