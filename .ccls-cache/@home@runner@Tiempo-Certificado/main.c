//Programa que calcula tiempo en acabar un certificado
//Diego Morales
//30-08-2022
//v1.0

//Bibliotecas
#include <stdio.h>

//funcion principal
int main(void) {
  
  //variables
  int tCer=60;
  int tDed;
  float tAca;

//Ingresar tiempo dedicado
  printf("Ingresar tiempo a dedicado a estudiar\n");
  scanf("%d",&tDed);

  //cambiar tiempo dedicado a minutos
  tCer = tCer * 60;

  //calculo tiempo de acabar
    tAca = tCer / tDed;

  //imprimir resultado
  printf("Acabarás tu certificado en %f días\n", tAca);
  return 0;
  
}