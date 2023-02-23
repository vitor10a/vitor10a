#include <stdio.h>
#include <stdlib.h>
/*
a) leia dois número inteiros e diferentes;
b) imprima o maior entre os dois números;
c) Subtrair o menor do maior número e imprimir o resultado;
d) Dizer se o primeiro número é impar ou par;
*/
void main(){
	int n1,n2;
	
	printf("Digite um numero inteiro:");
	
	scanf("%i",&n1);
	do{
		printf("Digite um outro numero inteiro:");
		scanf("%i", &n2);
		if(n1==n2){
		printf("Nao use numeros iguais!\n");
		}
	}
	
	while(n1==n2);

	if(n1>n2){
		printf("O maior numeor eh %i\n",n1);
		printf("A diferenca eh%i\n",n1-n2);
	} 
	else
		{
			printf("O maior numero%i\n",n2);
			printf("A diferenca eh%i\n",n2-n1);
		
	}
	if(n1%2==0){
		
			printf("O primeiro numero eh par\n");
		
	}
	else{
			printf("O primeiro numero eh impar \n");
		
	}
	}
		
		


	
