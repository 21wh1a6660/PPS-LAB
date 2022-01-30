#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,D;
	float p,q;
	printf("enter the values of a,b, and c\n");
	scanf("%d %d %d",&a,&b,&c);
	D=b*b-4*a*c;
	printf("discriminant=%d\n",D);
	if (D>0)
	{
		printf("roots are real and distinct\n" );
	
	}
	else if (D=0)
	{
		printf("roots are real and equal\n");
	}
	else 
	{
		printf("roots are imaginary\n");
	}
	p=(-b+sqrt(D))/(2*a);
	q=(-b-sqrt(D))/(2*a);
	printf("%f %f\n",p,q);
}
