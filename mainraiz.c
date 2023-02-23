#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	float a,b,c,delta,x1,x2;
	
		printf("Digite o valor de a:");
	scanf("%f",&a);
		printf("Digite o valor de b:");
	scanf("%f",&b);
		printf("Digite o valor de c:");
	scanf("%f",&c);
		
		if(a != 0){
			delta = (b*b) - 4 * a*c;
				if(delta == 0) {
						x1 = (-b + sqrt(delta))/2*a;
						printf("Delta igual a 0 \n");
						printf("x1 e x2 = %.2f \n", x1);
						printf("Possui uma raiz");
						
			}else{
				if(delta > 0) {
					x1 = (-b + sqrt(delta))/2*a;
					x2 = (-b - sqrt(delta))/2*a;
					printf("Delta maior que 0 \n");
					printf("x1 = %.2f\n",x1);
					printf("x2 = %.2f\n",x2);
					printf("Possui duas raizes");
			}else{
				printf("Delta menor que 0\n");
				printf("Nao existe raiz");
			}
		}
	}else{
		printf("Nao eh uma equacao do segundo grau\n");
		printf("a tem de ser diferente de 0");
	}
}


