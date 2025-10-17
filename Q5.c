#include <stdio.h>
int main()
{
	int i,arr[50],max=0,min=10000,difference;
    for(i=0;i<10;i++)
	{
	    printf("Enter number %d:",i+1);
	    scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
    	if(arr[i]>max)
    	{
    		max=arr[i];
		}
		if(arr[i]<min)
    	{
    		min=arr[i];
		}
	}
	difference=max-min;
	printf("the difference between the largest and smallest elements is %d",difference);
}
