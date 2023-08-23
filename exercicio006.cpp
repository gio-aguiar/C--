#include <stdio.h>

int main ()
{
	int idade;
	
	printf ("responda com quantos anos eu tive minha primeira melhor amiga");
	scanf ("%1i", &idade);
	

	while (idade <=5){
		printf ("digite um número maior");
		scanf ("%1i", &idade);
	}
	
		else {	printf ("voce acertou");
		}
	
	
	
	
	return 0;
}
