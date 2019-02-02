#include <stdio.h>
#include <string.h>


//输入一个单词，并逆序输出，使用strlen测出字符串长度
int main(void)
{
    char ch[10];
    int i;

    printf("请输入一个单词：");
    scanf("%s",ch);

    for(i=strlen(ch);i>0;i--)
        printf("%c",ch[i-1]);

    return 0;
}
