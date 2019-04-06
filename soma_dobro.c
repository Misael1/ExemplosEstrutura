#include<stdio.h>
int square (int x) { /* Calcula o quadrado de x */
	printf("O Quadrado e %d",(x*x));
	return 0;
}

int main (){
	
	int num;
	printf ("Entre com um Numero:");
	scanf("%d", &num);
	printf("\n\n");
	square(num);
	return 0;
}

