#include<stdio.h>
int n[10], i=0, a;
int main()

{
	printf("inserta 10 numeros \n");

	
	for(i=0;i<10;i++)
{
	printf("Numero: %d : ",i+1);
	scanf("%d",&n[i]);
}
	for(a=9;a>-1;a--)
	{
		printf(" %d",n[a]);
	}
	
	
	
	
}
