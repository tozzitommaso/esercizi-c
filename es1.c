#include <stdio.h>

int main()
{

	int n1, n2;
	double rapporto;

 do
 {
	printf("Inserisci primo numero intero");
	scanf("%d",&n1);
	printf("Inserisci secondo numero intero");
	scanf("%d",&n2);

    if(n1 > n2)
	rapporto = (double)n2 / (double)n1;
    else
	rapporto = (double)n1 / (double)n2;

      printf("Risultato=", rapporto);

 }while (n1!=0 && n2!=0);

  return 0;

}
