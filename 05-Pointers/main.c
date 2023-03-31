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
    int *arr[n];                        // pointer
    int i;
    
    // Random values saved in a pointer
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 500;
    }
    
    // Printing the pointer
    printf("El arreglo original es %d\n\n",n);
    imprimirArreglo(arr, n);

    // Printing values sorted
    printf("El arreglo ordenado por ALGORITMO DE BURBUJA es \n");
    ordenburbuja(arr, n);
    printf("\n");
    
    return 0;
}


// Funtion to print values of a pointer
void imprimirArreglo(int *arr, int n)
    {
        for(int i = 0; i < n; i++)
        {
            printf("%d\n", arr[i]);
        }
        printf("\n");
    }


// Funtion to sort a pointer using Bubble Sort
void ordenburbuja(int *arr, int n)
{
   int i, j, aux;
    
   for(i = 1; i < n-1; i++)
       
       for(j = 0; j < n-i; j++)
       
           if(arr[j] > arr[j+1])
            {
                aux      = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]   = aux;
            }
    
        imprimirArreglo(arr, n);
    }
