#include <stdio.h>
#include <math.h>

int main
{
    int a, b, c, differenza;
    int contaPari = 0;
    int contaDispari = 0;
    int contaNulli = 0;

    do
    {
        printf("Inserisci a/n");
        scanf("%d", a);
        printf("Inserisci b/n");
        scanf("%d", b);
        printf("Inserisci c/n");
        scanf("%d", c);

        differenza = a-b;
        
        if (differenza %2 = 0)
            contaPari++;
        else
            contaDispari++;
    }while(a+b < c);

    printf("I numeri pari sono %d", contaPari);
    printf("I numeri dispari sono %d", contaDispari);
    printf("I numeri nulli sono %d", contaNulli);

    return 0;
}