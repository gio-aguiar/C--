#include <stdio.h>

int main ()

{
	int n1, n2, soma, multiplica, divisao, subtracao;
	printf ("digite um numero \n");
	scanf ("%i", &n1);
	printf ("digite outro numero \n");
	scanf ("%i", &n2);
	soma = n1 + n2;
	multiplica = n1 * n2;
	divisao = n1/n2;
	subtracao = n1 - n2;
	printf ("a soma resulta em %1i \n", soma);
	printf ("a multiplicacao resulta em %li \n", multiplica);
	printf ("a divisao resulta em %1i \n", divisao);
	printf ("a subtracao resulta em %1i \n", subtracao);
}
