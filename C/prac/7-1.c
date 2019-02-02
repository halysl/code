#include <stdio.h>

//输入一串字符，输出有几个空格，换行符及其他
int main(void)
{
    int cs,cn,co;
    char ch;
    cs=cn=co=0;

    printf("请输入一些字符，以#结尾：\n");
    while((ch = getchar())!='#')
        {
            if(ch == ' ' )
                {cs++;}
            else if(ch == '\n')
                {cn++;}
            else
                {co++;}
         }
    printf("%d个空格\n%d个换行\n%d个其他字符",cs,cn,co);

    return 0;

}
