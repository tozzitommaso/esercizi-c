#include <stdio.h>

int main(argc,char*argv[])
{
    int a;
    int b;
    int prodotto;
    int somma = 0;

    do
    {
        printf("inserisci il primo numero");
        scanf("%d", &a);
        printf("Inserisci il secondo numero");
        scanf("%d", &b);
        
        prodotto = (double)a * (double)b;
        scanf("Il prodotto è: %d", p);
        
        somma = somma + prodotto;
    }while(a != 0 && b != 0);

    printf("la somma è: %d", somma);

    return 0;
}


