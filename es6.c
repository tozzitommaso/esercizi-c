#include <stdio.h>

int main()
{

	int i = 0, somma = 0, a, b, num;
	double media;
	do
	{
		printf("inserisci a\n");
		scanf("%d", &a);
		printf("inserisci b\n");
		scanf("%d", &b);
	} while (b < a);
	
	do
	{
		printf("inserisci un numero\n");
		scanf("%d", &num);

		if (num >= a && num <= b)
		{
			somma = somma + num;
			i++;
		}

	} while (num >= a && num <= b);
	media = (double)somma / (double)i;

	printf("la media è: %f\n", media);

	return 0;
}