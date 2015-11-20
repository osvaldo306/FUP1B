#include<stdio.h>
int dias=30, mes=0, i=0, j=0;
int main()
{
	printf("dame el dia en que comienza\n");
	scanf("%d",dias);
	printf("dame el dia en que termina\n");
	scanf("%d", mes);
	while(i<dias)
	{
		i=mes-dias;
		printf("%d",i);
		j++;
		
	}
}
