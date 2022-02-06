#include <stdio.h>
#include <math.h>


int main()
{
    int a, b, c, max = 0, min;
    do
    {
        printf("Inserisci il valore di a");
        scanf("%d", &a);
        printf("Inserisci il valore di b");
        scanf("%d", &b);
        printf("Inserisci il valore di c");
        scanf("%d", &c);
        if (a > 0 || b > 0 || c > 0)
        {
            if (a < b < c)
            {
                if (a < min)
                    min = a;
                if (c > max)
                    max = c;
            }
        }
    } while (a > 0 && b > 0 && c > 0);
    printf("Il valore minore è: %d\n", min);
    printf("Il valore massimo è: %d\n", max);
    return 0;
}