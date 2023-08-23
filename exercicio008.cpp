#include <stdio.h>

int main ()

{
	int a, b, c, d, media;
	printf ("Digite a nota do 1 bimestre \n");
	scanf ("%1i", &a);
	
	printf ("Digite a nota do 2 bimestre \n");
	scanf ("%1i", &b);
	
	printf ("Digite a nota do 3 bimestre \n");
	scanf ("%1i", &c);
	
	printf ("Digite a nota do 4 bimestre \n");
	scanf ("%1i", &d);
	
	media = (a + b + c + d) / 4;
	
	
	printf ("a sua media foi %1i", media );
}
