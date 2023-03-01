#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>

main()

{

float peso,altura,resultado; 
char sexo;    


printf("Digite sua altura:");    
scanf("%f",&altura);    

printf("Digite seu peso:");    
scanf("%f",&peso);    

printf("Digite seu sexo [F] ou [M]:");    
scanf("%s",&sexo);        

if(sexo == 'm') 
{
resultado = ((72.7*altura) - 58);

}

else if (sexo == 'f')
{

    resultado = ((62.1*altura) - 44.7);   
}
printf("O seu peso ideal eh: %f ", resultado);
getch();
}
