#include <stdio.h>

//ÿ������˸��ַ�����#��β
int main(void)
{
    char ch;
    int count=0;

    printf("������һ���ַ�����\n");
    while((ch=getchar())!='#')
    {
        printf("%c ",ch);
        count++;
        if(count%8==0)
            printf("\n");
    }

    return 0;

}
