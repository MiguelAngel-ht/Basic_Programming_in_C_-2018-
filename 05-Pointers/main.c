// Libraries
#include <stdio.h>
#include <stdlib.h>

// Definition of functions
void imprimirArreglo(int[], int);
void ordenburbuja(int[], int);

int main()
{   
    // Definition of variables
    int n = 100;
    int *arr[n];
    int i;
    
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 500;
    }
    
    printf("El arreglo original es %d\n\n",n);
    imprimirArreglo(arr, n);

    printf("El arreglo ordenado por ALGORITMO DE BURBUJA es \n");
    
    ordenburbuja(arr, n);
    printf("\n");
    
    return 0;
}


void imprimirArreglo(int *arr, int n)
    {
        for(int i=0; i<n; i++)
        {
            printf("%d\n",arr[i]);
        }
    
        printf("\n");
    }


void ordenburbuja (int *arr, int n)
{
   int i, j, aux;
    
   for(i=1; i<n-1; i++)
       for(j=0; j<n-i; j++)
           if(arr[j]>arr[j+1])
            {
                aux    = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]   = aux;
        }
        imprimirArreglo(arr,n);
    }
