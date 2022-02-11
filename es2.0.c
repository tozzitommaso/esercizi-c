#include <stdio.h>

int main()
{
    int n, indice;

    printf("Inserisci un numero intero positivo\n");
    scanf("%d", &n);
    indice = n;

    do
    {
        if (indice == n)
        {
            printf("I numeri sono: \n");
            printf("-%d \n", indice);
        }
        else
            printf("-%d \n", indice);

        indice--;
    } while (indice != 0);

    return 0;
}