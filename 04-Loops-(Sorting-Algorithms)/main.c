#include <stdio.h>
#include <stdlib.h>


void ordenarPorIntercambio(int arr[], int n);

void imprimirArreglo (int[], int);

void ordenmientoburbuja (int[], int);




int main()
{
    int arr[100];
    int n = sizeof(arr)/sizeof(int);
    printf("El tamaño del arreglo es %d\n\n",n);

    printf("El  arreglo original es \n");
    imprimirArreglo(arr, n);
    printf(" \n\n ");


     printf("El  arreglo ordenado por algoritmo de intercambio es \n");
     ordenarPorIntercambio(arr,n);
     printf(" \n\n ");

     printf("El  arreglo ordenado por algoritmo burbuja es \n");
     ordenburbuja (arr, n);
     printf(" \n\n ");

    return 0;
}





void imprimirArreglo(int arr[], int n)
{

        for(int i=0; i<n; i++)
        {
            printf("%d \n",arr[i]);
            printf("\n");

        }

}




void ordenarPorIntercambio(int arr[], int n)
{


    int  aux, i;

for (i=0;i<n;i++)
   {
       arr[i]=rand()%1001-501;
   }
    for(i=0; i<n-1; i++)
        {
        for(int j=i+1; j<n; j++)
            {if(arr[i] > arr[j])
              {
            aux=arr[i];
            arr[i] = arr[j];
            arr[j] = aux;
               }
            }
        }

    imprimirArreglo(arr,n);
}





void ordenburbuja (int arr[], int n)
{
    int i,j,aux;
   for (i=0;i<n;i++)
   {
       arr[i]=rand()%1001-501;
   }

    for(i=1; i<n-1; i++)
	{
		for(j=0; j<n-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
			    aux    = arr[j+1];
				arr[j+1] = arr[j];
				arr[j]   = aux;
			}
	}	}

        imprimirArreglo(arr,n);
    }
