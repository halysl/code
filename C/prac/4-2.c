#include <stdio.h>
#include <string.h>

int main(void)
{
    char f_name[20];
    char s_name[20];

    printf("please input your first name:");
    scanf("%s",f_name);
    printf("please input your second name:");
    scanf("%s",s_name);

    printf("\"%s,%s\"\n",f_name,s_name);
    printf("\"%20s,%s\"\n",f_name,s_name);
    printf("\"%s,%-20s\"\n",f_name,s_name);
    printf("\"%*s,%s\"\n",strlen(f_name)+3,f_name,s_name);

    return 0;
}
