#include<stdio.h>
#include<math.h>


int main(int argc, char** args)
{
   // definition of variables of quadratic equation and discriminant
   float a, b, c, disc, x1, x2, xi, xr;
   
   printf("\n Solution of a Quadratic Equation \n");
   printf("\t\t\t Write the value of a = ");
   scanf("%f", &a);
   
   while(a == 0)
    {
         printf("\t\t The value a don't be equall to zero, Please, writte another value =");
         scanf("%f", &a);
   }
   
   printf("\t\t\t Write the value of b = ");
   scanf("%f", &b);
   printf("\t\t\t Write the value of c = ");
   scanf("%f", &c);
   
   disc = pow(b, 2.0) - 4 * a * c;
   
   if(disc > 0.0)
    {
       printf("\t\t\t Both discriminants are positive values");
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
