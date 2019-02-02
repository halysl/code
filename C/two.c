#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("N=");
    int n,i;
    scanf("%d",&n);
    int len=sizeof(int)*8;   //int型所占数据宽度

    for(i=0;i<len;i++)
    {

        putchar('0'+((unsigned)(n<<i)>>(len-1)));    //先左移，再逻辑右移，就把二进制从高位到低位输出了

// printf("%d",((unsigned)(n<<i)>>(len-1)));  //也可以这样输出
    }
    printf("\n%d\n",n);

    //Another method
    for(i=0;i<len;i++)
    {
        putchar('0'+((unsigned)(n&(1<<(len-1)))>>len-1));  //将1左移，然后和n做按位与运算，最后逻辑右移，从高位到低位输出二进制
        n<<=1;  //上边的一句总是对最高位进行处理，所以，这里就对n左移一位喽
    }
    printf("\n%d\n",n);
}
