#include <stdio.h>
#include <stdlib.h>
/*
a) leia dois n�mero inteiros e diferentes;
b) imprima o maior entre os dois n�meros;
c) Subtrair o menor do maior n�mero e imprimir o resultado;
d) Dizer se o primeiro n�mero � impar ou par;
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
		
		


	
