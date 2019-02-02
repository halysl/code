#include <stdio.h>


//输入一行字符串，进行相应的转换，输出转换后结果及次数
int main(void)
{
    char ch[100];
    int count=0;
    int i;

    printf("请输入一些字符串：\n");
    for(i=0;i<100;i++)
    {
        scanf("%c",&ch[i]);
        if(ch[i]=='#')
            break;
        else if(ch[i]=='.')
        {
            printf("!");
            count++;
        }
        else if(ch[i]=='!')
        {
            printf("!!");
            count++;
        }
        else
            printf("%c",ch[i]);
    }

    printf("转换了%d次。",count);

    return 0;
}
