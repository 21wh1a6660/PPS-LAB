#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("entre the values of a,b and c ");
	scanf("%d %d %d",&a,&b,&c);
	max=a>b?(a>c? a:c):(b>c?b:c);
	printf("%d is greater",max);
	
	
}
