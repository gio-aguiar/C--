#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main ()
 
 {
 	float salariohora, horasmes, totalmes;
 	
 	printf ("quanto voce ganha por hora? \n");
 	scanf ("%f", &salariohora);
 	
 	printf ("quantas horas voce trabalha no mes? \n");
 	scanf ("%f", &horasmes);
 	
 	totalmes = salariohora * horasmes;
 	
 	do {
 		printf ("digite outro valor para o mes");
 		scanf ("%f", &horasmes);
	 }
	while (horasmes >=730);
	
	switch(horasmes <=729) {
	printf ("voce recebe %f", totalmes);}
 	
 	return 0;
 }
