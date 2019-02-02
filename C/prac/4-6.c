#include <stdio.h>
#include <string.h>

int main(void)
{
    char f_name[20];
    char s_name[20];
    int m,n;

    printf("please input your first name:");
    scanf("%s",f_name);
    printf("please input your second name:");
    scanf("%s",s_name);
    printf("your name is:\n");
    printf("%s %s\n",f_name,s_name);
    printf("%*d %*d\n",strlen(f_name),strlen(f_name),strlen(s_name),strlen(s_name));
    printf("\n");
    printf("%s %s\n",f_name,s_name);
    printf("%-*d %-*d\n",strlen(f_name),strlen(f_name),strlen(s_name),strlen(s_name));

    return 0;
}
