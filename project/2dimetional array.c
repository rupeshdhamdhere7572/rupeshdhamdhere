#include<stdio.h>
main()
{
	int a[3][3],i,j,p;
	printf("\n enter array elements");
	for(i=0;i<=2;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=2;i++)
	{
	for(j=0;j<=2;j++)
	{
		if(a[i]>a[j])
		{
			p=a[i];
			a[i][j]=a[j];
			a[i][j]=p;
		}
	}
}
printf("\n ascending order");
for(i=0;i<=4;i++)
{
	printf("\t %d",a[i][j]);
	}	
}
