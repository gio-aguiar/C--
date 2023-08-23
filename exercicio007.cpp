#include <stdio.h>

int main ()

{
	
	int a, b, c, delta;
	printf ("digite um numero \n");
	scanf ("%i", &a);
	printf ("digite outro numero \n");
	scanf ("%i", &b);
	printf ("digite outro numero \n");
	scanf ("%i", &c);
	delta = b * b - 4 * a * c;
	printf ("a delta desses valores %1i", delta);
	
}

