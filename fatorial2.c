#include<stdio.h>
#include<conio.h>
int troca (int *a, int *b){
	int x;
	if (*a > *b){
	x=*a;
	*a=*b;
	*b=x;
	}
	return 0;
}
main(){
	
	int vetor[9], i, j;
	char tecla;
	printf("\n\nOrdenacao de Vetor\n\n");
	
	for (i=0;i<=9;i++){
		printf("Entro com o %d. elemento:");
		scanf("%d", &vetor[i]);
	}
	
	for (i=0;i<=9;i++)
	for (i=0;i<=9;i++)
	troca(&vetor[i],&vetor[j]);
	
	for (i=0;i<=9;i++)
	printf("\n%do. elemento:%d", i+1, vetor[i]);
	system("pause");
	return 0;
	
}
