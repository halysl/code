#include <stdio.h>
int main()
{double a,b,c1,c2,c3,c4;
 printf("请输入一个数：");
 scanf("%f",&a);
 printf("请再输入一个数：");
 scanf("%f",&b);
 c1=a+b;
 c2=a-b;
 c3=a*b;
 c4=a/b;
 printf("a+b=%f\na-b=%f\na*b=%f\na/b=%f",c1,c2,c3,c4);
 return 0;
}
