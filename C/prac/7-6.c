#include <stdio.h>

int main(void)
{
    char ch[100];
    int i;
    int count=0;

    fflush(stdout);
    printf("������һЩ�ַ�:\n");
    for(i=0;i<100;i++)
       {
            scanf("%c",&ch[i]);
            printf("%c",ch[i]);
            if(ch[i]=='#')
                break;
       }

    for(i=0;i<100;i++)
    {
        if(ch[i]=='e' && ch[i+1]=='i')
            count++;
    }


    printf("ei���ֹ�%d��",count);


}
