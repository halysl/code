#include <stdio.h>

int main(void)
{
    char f_name[20];
    char s_name[20];

    printf("please input your first name:");
    scanf("%s",f_name);
    printf("please input your second name:");
    scanf("%s",s_name);
    printf("your name is %s,%s!\n",f_name,s_name);

    return 0;
}
