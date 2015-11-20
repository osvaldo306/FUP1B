#include <stdio.h>

int k;
int t;

int main()
{
	printf("Este programa sirve para decir el tiempo de lavado, cuanta agua se utilizara y  el tipo de lavado para la ropa\n");
	printf("Introduzca los kg de ropa el maximo es 20\n \n");
	scanf("%d", &k);
	
		if(k>20)
	{
		printf("\nno se  puede lavar \n");
		return 0;
		}
		else if (k<=10)
 		printf("\nnivel bajo de agua \n");

			
		else if (k<=15)
		{
 		printf("\nnivel medio de agua \n");
		
		}	
			
		else if (k<=20)
		{
 		printf("\nnivel alto de agua \n");
		
		}
		
	
	printf("\nEscriba el numero de la opcion deseada dependiendo del tipo de ropa que deseas  lavar\n \nRopa delicada : 1\n \nRopa sucia : 2\n \nRopa muy sucia : 3\n\n");
	scanf("%d", &t);
	switch (t){
		case 1:
			printf("\nTiempo de lavado 5 minutos\n");
		break;
		case 2:
			printf("\nTiempo de lavado 10 minutos\n");
		break;
		case 3:
			printf("\nTiempo de lavado 20 minutos\n");
		break;
		
		default:printf("\nEsta opcion no es parte del menu \n");
	}
			
}
					

				
		
		
	


		
	
	  
	
	
	

