#include <stdio.h>
int main()
{
	int i=0;
	char str[50];
	printf("Enter a sentence:\n");
	scanf("%[^\n]", str);
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		i++;
	}
	printf("Converted message:\n");
	printf("%s",str);
	return 0;
}
