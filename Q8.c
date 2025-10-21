#include <stdio.h>
int main()
{
	char str[100];
	printf("Enter a string:");
	scanf("%[A-Za-z]",str);
	printf("You entered:%s\n",str);
	return 0;
}
