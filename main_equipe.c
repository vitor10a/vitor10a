#include <stdio.h>
#include <stdlib.h>

void main(){
	int acima_media,i;
	float altura;
	char nome_equipe[200];
	printf("Digite o nome da equipe: ");
	//scanf("%s", &nome_equipe);
	gets(nome_equipe);
	printf("Nome: %s\n",nome_equipe);
	
	for(i=0;i<20;i++){
		printf("Digite a altura da %ia pessoa: ", i+1);
		scanf("%f",&altura);
		if(altura>1.73)	acima_media++;	
	}
	printf("Acima da media: %i\n", acima_media);
}

