#include <stdio.h>
int main ()

{

int i,a,num1,num2;
i=1;
a=0;
printf("este programa realiza la multiplicacion de 1 numero \n");
printf("dame el primer numero");
scanf("%d",& num1);


while (i<= num1)
{
	a=a+num1;
	i=i+1;
}
printf("el resultado es: %d",a);


}
