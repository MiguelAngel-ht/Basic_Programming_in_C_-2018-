#include<stdio.h>
#include<math.h>


int main(int argc, char** args)
{
   float a, b, c, disc, x1, x2, xi, xr;
   
   printf("\n Solucion de una ecuacion de segundo grado \n");
   printf("\t\t\t Escribe el valor de a = ");
   scanf("%f", &a);
   
   while(a == 0)
    {
         printf("\t\t El valor de a no puede ser 0 ingrese el valor de nuevo =");
         scanf("%f", &a);
   }
   
   printf("\t\t\t Escribe el valor de b = ");
   scanf("%f", &b);
   printf("\t\t\t Escribe el valor de c = ");
   scanf("%f", &c);
   
   disc = pow(b, 2.0) - 4 * a * c;
   
   if(disc > 0.0)
    {
       printf("\t\t\tLos dos valores son reales");
       x1 = ((-b + sqrt(disc)) / (2.0 * a));
       x2 = ((-b - sqrt(disc)) / (2.0 * a));
       printf("\n\t\t\t x1=%.2f   x2=%.2f", x1, x2);
   }
   else
   {
       if(disc == 0.0)
       {
           x1 = (-b) / (2.0 * a);
           printf("\n\t\t\t La ecuación sólo tiene un valor real %.2f", x1);
       }
       else
       {
           xr = (-b / (2.0 * a));
           xi = (sqrt(-disc) / (2.0 * a));
           printf("\n\t\t La raíz real es %.2f y la imaginaria es %.2f", xr, xi);
       }
   }
   printf("\n\n\t\t\t");
}
