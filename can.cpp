#include <stdio.h>
int main ()
{
	int i,p,ma,mr,d;
	printf("dame la profundidad");
    scanf("%d",& p);
	printf("dame los metros avanzados ");
    scanf("%d",& ma);
	printf("dame los metros retrocedidos");
    scanf("%d",& mr);
	for(i=1;i<=mr;i++)
	d=ma+mr/p;
	printf("tardo  %d dias"),d;	
	 
}
