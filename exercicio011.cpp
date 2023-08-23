#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main ()

{ 
float lado, area, dobro;

printf ("quantos cm tem uma aresta do quadrado? \n");
scanf ("%f", &lado);

area = lado * 4;
dobro = area * 2;

printf ("a area do quadrado tem %.1f\n O dobro tem %.1f", area, dobro);

return 0;
}
