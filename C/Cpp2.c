#include <stdio.h>
int main()
{
int i;
for(i=2000;i<=2500;i++)
if(i/400==0)
printf("%d\n",i);
else if(i/4==0&&i/100!=0)
printf("%d\n",i)£»
else return 0;
}