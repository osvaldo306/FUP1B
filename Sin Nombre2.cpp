#include<stdio.h>
int n1,res;
int main()
{
	 printf("dame un numero");
	 scanf("%d",&n1);
	res=n1%2;
	if(res==0)
	{
		printf("es par");
	}
	else
	{
		printf("es impar");
	}
}
