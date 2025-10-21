#include <stdio.h>
int main()
{
	int i,num,count=0,arr[10];
	for(i=0;i<10;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter a number to search:");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		if(num==arr[i])
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("\nThe number %d has occured %d times.\n",num,count);
	}
	else
	{
		printf("\nNumber not found\n");
	}
	return 0;
}
