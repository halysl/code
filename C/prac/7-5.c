#include <stdio.h>

//输入一行字符串，进行相应的转换，输出转换后结果及次数
int main(void)
{
    char ch[100];
    int count=0;
    int i;

    for(i=0;i<100;i++)
    {
        scanf("%c",&ch[i]);
        switch(ch[i])
        {
            case '#':
                break;
            case '.':
                printf("!");
                count++;
                continue;
            case '!':
                printf("!!");
                count++;
                continue;
            default :
                printf("%c",ch[i]);
                continue;
        }

        printf("转换了%d次",count);
        return 0;
    }
}
