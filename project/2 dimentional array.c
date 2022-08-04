#include<stdio.h>{
	main()
	{
	int a[3][3],i,j;
	printf("\n enter array elements");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n display array elements");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\n a[%d][%d]=%d",i,j,a[i][j]);
		}
	}
	
}
