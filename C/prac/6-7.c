#include <stdio.h>
#include <string.h>


//����һ�����ʣ������������ʹ��strlen����ַ�������
int main(void)
{
    char ch[10];
    int i;

    printf("������һ�����ʣ�");
    scanf("%s",ch);

    for(i=strlen(ch);i>0;i--)
        printf("%c",ch[i-1]);

    return 0;
}
