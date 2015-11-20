#include<stdio.h>
int num1;
int cont;
int num;
int main()
{
	printf("este programa sirve para");
	printf("dame un numero");
	scanf("%d",&num1);
	cont=1;
	while (cont<=num1)
	{
		num=1;
		while (num<=cont)
		{
			printf(" %d",cont);
			num++;
			
		}
		printf("\n");
		cont++;
		
		
	}
	system("pause");
}
