#include <stdio.h>

//����һ���ַ�����������Ӧ��ת�������ת������������
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

        printf("ת����%d��",count);
        return 0;
    }
}
