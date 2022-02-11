#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 0;

    printf("scrivi un numero:");
    scanf("%d", &n);

    printf("I numeri dispari compresi fra %d e %d sono: \n\n", i, n);
    do 
    {
        printf("%d\n", i);
        i = i + 2;
    }while (i<=n);

    return 0;
}