#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *caesar(const char *str,int offset)
{
	char *start,*ret_str;
	start = ret_str = (char *) malloc(strlen(str) + 1);
	for(;*str!='\0';str++,ret_str++)
	{
		if(*str>='A' && *str<='Z')
			*ret_str = 'A' + (*str - 'A' + offset) % 26;
		else if(*str>='a' && *str<='z')
			*ret_str = 'a' + (*str - 'a' + offset) % 26;
		else
			*ret_str = *str;
	}
	*ret_str = '\0';
	return (char *) start;
}

int main(void)
{   int i;
	printf("%s\n","KIQLWTFCQGNSOO");
	for(i=1;i<=26;i++)
        printf("%s\n",caesar("KIQLWTFCQGNSOO",i));
	return 0;
}
