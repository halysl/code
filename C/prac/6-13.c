#include <stdio.h>
#include <math.h>
//forѭ�������鴢�����ݣ�do...while���
int main(void)
{
    int a[8];
    int i;

    for(i=0;i<8;i++)
        a[i]=pow(2,i+1);

    i=0;
    do{
        printf("%d\t",a[i]);
        i++;
    }while(i<8);
}
