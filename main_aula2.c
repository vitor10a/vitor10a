#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main (){

	float h,peso;
	char sexo;
	printf("Digite a altura:");
	scanf("%f",&h);
	do{
	printf("Digite o sexo:");
	setbuf(stdin,NULL);//limpa o buffer do teclado
	scanf("%c",&sexo);
	
	if(sexo=='M' || sexo=='m'){
		peso=72.7*h-58;
	}else{
		if(sexo=='F'|| sexo=='f'){
			peso=62.1*h-44.7;
		}else{
			printf("Sexo invalido!\n");
		}
	}
}while(sexo!='M' && sexo!='m' && sexo!='F' && sexo!='f');
printf("Peso ideal eh %.2f\n",peso);
}


