#include <stdio.h>

float calcular_raiz_cuadrada(float x){
    
    if(x < 0){
     
         x = x * (-1);
    }

     float b = x;

     while (b*b != x){
      
         b = .5*((x/b)+ b);
     }

    return b;

}


int main(){

 float x, b;

 printf("Raiz cuadrada de un número \n");

 printf("Raíz x: ");
 scanf("%f", &x);

 b = calcular_raiz_cuadrada(x);


 if( x < 0 ){
    
     printf("Raíz imaginaria: %.4f \n",b);
  }
 else{

     printf("Raíz real: %.4f \n",b);
  }


 return 0;

}
