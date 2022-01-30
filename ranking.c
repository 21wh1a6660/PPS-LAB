#include<stdio.h>
#include<math.h>
 main()
{
	int S1,S2,S3,S4;
	float avg;
	printf("enter S1,S2,S3,S3,S4");
	scanf("%d %d %d %d",&S1,&S2,&S3,&S4);
	avg=(S1+S2+S3+S4)/4;
	printf("%f",avg);
	if (avg>=90)
	{
		printf("Distinction\n");
	}
	else if (avg>=80)
	{
		printf("merits\n");
	}
	else if (avg>=60)
	{
		printf("above average\n");
	}
	else if (avg>=50)
	{
		printf("avgerage\n");
	}
	else if (avg>=40)
	{
		printf("below average\n");
	}
	else
	{
		printf("fail");
	}
	}
