#include <stdio.h>
int main()
{
	int i;
	int arr[50],newarr[50];
	for(i=0;i<5;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{
		newarr[i+1]=arr[i];
	}
	newarr[0]=arr[4];
	for(i=0;i<5;i++)
	{
		printf("%d ",newarr[i]);
	}
	return 0;
}
