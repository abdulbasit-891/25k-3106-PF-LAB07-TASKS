#include <stdio.h>
int main()
{
	int i=0,vowel=0,consonants=0;
	char str[100];
	printf("Enter a word:");
	scanf("%s",str);
	while(str[i]!='\0')
	{
	  if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
	  {
	    if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			vowel++;
		}
		else
		{
			consonants++;
		}
	 }
		i++;
    }	
	printf("number of vowel: %d\n",vowel);
	printf("number of consonants: %d",consonants);
	return 0;
}
