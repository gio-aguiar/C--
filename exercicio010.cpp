/*
Fa�a um Programa que pe�a o raio de um c�rculo, calcule e mostre sua �rea.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

int main()

{
    float raio, area;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    area = M_PI * (raio * raio);
    printf("A area eh %f", area);
    return 0;
}
