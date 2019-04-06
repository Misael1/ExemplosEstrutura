#include<stdio.h>
#include<math.h>

float a, b, c, D;
float hipotenusa (float a, float b){
	return(sqrt(a*a + b*b));
}
main(){
	printf("Entre com o Valor A: ");
	scanf("%f", &a);
	printf("Entre com o Valor B: ");
	scanf("%f", &b);
	printf("Entre com o Valor B: ");
	scanf("%f", &c);
	D = hipotenusa(hipotenusa(a, b), c);
	printf("o Valor da Diagonal eh: %f", D);
	return (0);
}
