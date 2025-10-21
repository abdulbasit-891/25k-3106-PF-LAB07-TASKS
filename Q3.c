#include <stdio.h>
int main()
{
	int i=0,marks,pass_marks[10],failed_marks[10],passcount=0,failedcount=0;
	float pass_sum=0,failed_sum=0,avg_pass,avg_fail;
	printf("Enter quiz marks for students (enter -1 to stop):\n");
	while(i<10)
	{
		printf("Enter marks for student %d:",i+1);
		scanf("%d",&marks);
		if(marks==-1)
		{
			break;
		}
		if(marks<0||marks>10)
		{
			continue;
		}
		if(marks>=5&&marks<=10)
		{
			pass_marks[passcount]=marks;
			passcount++;
			pass_sum=pass_sum+marks;
		}
		if(marks>=0&&marks<5)
		{
			failed_marks[failedcount]=marks;
			failedcount++;
			failed_sum=failed_sum+marks;
		}
		i++;
	}
	if (passcount > 0)
	{
        avg_pass=pass_sum/passcount;
	}
    if (failedcount > 0)
    {
        avg_fail=failed_sum/failedcount;
    }
	printf("The marks of passed students are:");
	for(i=0;i<passcount;i++)
	{
		printf("%d",pass_marks[i] );
		if (i<passcount-1)
		{
         printf(", ");
        }
	}
	printf("\n");
	printf("The marks of failed students are:");
	for(i=0;i<failedcount;i++)
	{
		printf("%d",failed_marks[i] );
			if (i<failedcount-1)
		{
         printf(", ");
        }
	}
	printf("\n");
	printf("Average marks of passed students: %0.2f\n",avg_pass);
	printf("Average marks of failed students: %0.2f\n",avg_fail);
	return 0;
}
