#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,SI,CI;
	printf("enter the values of p,t and r");
	scanf("%f %f %f",&p,&t,&r);
	SI = (p*t*r)/100;
	printf("%f\n",SI);
	CI=(p*pow(1+r/100,t))-p;
	printf("%f",CI);
}
