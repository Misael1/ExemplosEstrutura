#include<stdio.h>

int fatorial (int n){
	int i, fat;
	fat=1;
	for (i=1;i<=n;i++)
	
	fat*=i;
	printf("\nFatorial de %d = %d\n",n,fat);
	return (fat);
}
	
	main (){
		
		int limite;
		char tecla;
		printf("\n\nCalculo de Fatorial\n");
		printf("\nQual Fatorial:");
		scanf("%d",&limite);
		printf("\Fatorial de %d = %d\n",limite, fatorial(limite));
		printf("Tecle <ENTER> para Finalizar");
		tecla=getche();
		return 0;
	}

