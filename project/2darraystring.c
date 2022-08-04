#include<stdio.h>
#include<string.h>
//2nd character array
main()
{
	char name[5][10];
	int i,j,len;
	printf("\n enter 5 students name");
	for(i=0;i<5;i++)
	{
		scanf("%s",&name[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\t%s",name[i]);
	}
	//length of string
	for(i=0;i<5;i++)
	{
		len=0;
		for(j=0;j<strlen(name[i]);j++)
		{
			len++;
		}
		printf("\n %s length=%d",name[i],len);
	}
	//reverse string
	for(i=0;i<5;i++)
	{
		for(j=strlen(name[i])-1;j>0;j--)
		{
			printf("%c",name[i][j]);
		}
		printf("\n");
	}
}
