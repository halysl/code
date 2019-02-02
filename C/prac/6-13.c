#include <stdio.h>
#include <math.h>
//for循环加数组储存数据，do...while输出
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
