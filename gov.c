#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	
	int qtd_crianca,idade_mae,idade_pai;
	float renda_familiar;
	
	printf("Digite a quantidade de criancas:");
	scanf("%i",&qtd_crianca);
	
	printf("Digite a renda familiar:");
	scanf("%f",&renda_familiar);	
	
	printf("Digite a idade da mae:");
	scanf("%i",&idade_mae);
	
	printf("Digite a idade do pai:");
	scanf("%i",&idade_pai);
	
	if(qtd_crianca>=3 && renda_familiar<500 &&
	((idade_mae>30 && idade_mae<50) || 
	 (idade_pai>40 && idade_pai<60)) ){
	  	printf("Familia apta!\n");
	}else{
		printf("Familia nao apta!\n");
		
	}
}

