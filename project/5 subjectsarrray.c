#include<stdio.h>
main()
{
	int marks[5],sum=0,avg,i;
	printf("\n enter 5 subjects marks");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<=4;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("\n sum=%d",sum);
	printf("\n avg=%d",avg);
}
