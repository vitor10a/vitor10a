#include <stdio.h>
#include <stdlib.h>

void main(){
	float salario,menor,maior,soma;
	int quant=0;
	do{
		printf("Digite o salario: ");
		scanf("%f",&salario);
			
			if(maior<salario) maior=salario;
			if(quant==0){
				menor=salario;
				maior=salario;	
			}
			if(salario>=0){
				if(menor>salario) menor=salario;
				soma=soma+salario;
				quant++;
	}
	
	}while(salario>=0);
	printf("Soma: %.2f\n",soma);
	printf("Quant: %i\n",quant);
	printf("Media: %.2f\n",soma/quant);
	printf("Maior: %.2f\n",maior);
	printf("Menor: %.2f\n",menor);
}
