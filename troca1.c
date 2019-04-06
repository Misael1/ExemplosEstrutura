#include<stdio.h>

int soma_dobro(int a,int b){
	int soma;
	a=2*a;
	b=2*b;
	soma=a+b;
	return(soma);
}

main(){
	int x,y,res;
	printf("Digite o primeiro Numero:");
	scanf("%d",&x);
	printf("Digite o Segundo Numero:");
	scanf("%d",&y);
	res=soma_dobro(x,y);
	printf("\n A Soma do dobro dos Numeros eh:%d",res);
	return 0;
}
