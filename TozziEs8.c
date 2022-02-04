#include <stdio.h>
#include <math.h>
/*Progettare un algoritmo che risolve il seguente problema. Si desidera 
calcolare la somma delle radici quadrate di N valori numerici inseriti 
dall’utente. 
L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
con un messaggio di errore quando viene inserito un numero che non
permette di effettuare il calcolo (nel dominio dei numeri reali).*/

int main
{
    int numero;
    double radice, somma;

    do
    {
        printf("Inserisci un numero che sia maggiore o uguale a 0\n");
        scanf("%d", & numero);

        if(numero >= 0)
            somma = somma + sqrt(numero)
        else
            printf("Il numero inserito non permette di effettuare il calcolo\n");

    }while(numero >= 0)

        printf("La somma è %f\n", somma);
    
    return 0;
    
}