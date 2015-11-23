#include<stdio.h>
int main()
{
	int i=0, j, n, a[100];
		printf("Este programa transforma los numeros a binarios \n");
		printf("Inserta un numero\n ");
	
	
	scanf ("%d",&n);
	
	
	while (n>0){
		a[i] = n % 2;
		n /= 2;
		++i;
			
	}
	printf("El numero binario es:");
	for (j=i-1;j>=0;--j)
	{
		printf(" %d",a[j]);
	}
	
		
	
	
}
