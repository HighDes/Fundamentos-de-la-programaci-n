
//Programa que calcula Volumen de prisma triangular
//Diego Morales Ramírez
// 01-09-2022
// v1.0

//Biblioteca
#include <stdio.h>
#include <math.h>

//función principal
int main(void) {

  //Variables
int lado;
int altura;
float area;
float volumen;

  //Ingresar valores de lado y altura
  printf("Ingrese el valor del lado de la base \n");
  scanf("%d",&lado);

  printf("Ingresar el valor de la altura\n");
  scanf("%d",&altura);
  
  //Calcular area de la base
  area=(lado * lado)/2;

  //Calcular volumen
  volumen=area * altura;

    //imprimir el resultado
    printf("el volumen de tu prisma rectangular es %f u3", volumen);
 
  return 0;
}