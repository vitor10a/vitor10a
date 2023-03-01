#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


main()

{

float peso,altura,resultado; 
char sexo;    


printf("Digite sua altura:");    
scanf("%f",&altura);    

printf("Digite seu sexo [F] ou [M]:");  
setbuf(stdin,NULL);  
scanf("%c",&sexo);        

if(sexo == 'M') 
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
