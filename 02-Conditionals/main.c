#include <stdio.h>


int main(){
 
  int numero, mayor = 0, menor = 999999, i;
  
 for(i = 0; i < 3; i = i+1){
 
  printf("Ingrese el %i numero: ",i+1);
  scanf("%i",& numero);

  if(numero > mayor)
       mayor = numero;

   if(numero < menor)
       menor=numero;
  }

  printf("El mayor es: %i\n",mayor);
  printf("El menor es: %i\n",menor);


  return 0;
}
