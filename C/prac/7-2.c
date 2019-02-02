#include <stdio.h>

//每行输出八个字符，以#结尾
int main(void)
{
    char ch;
    int count=0;

    printf("请输入一行字符串：\n");
    while((ch=getchar())!='#')
    {
        printf("%c ",ch);
        count++;
        if(count%8==0)
            printf("\n");
    }

    return 0;

}
