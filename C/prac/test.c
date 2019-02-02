#include<stdio.h>



void mov(int n,char N,char M)

{

	printf("%d号盘子从%c到%c\n",n,N,M);

}

void hanoi(int n,char A,char B,char C)

{

	if(n==1)

		mov(n,A,C);

	else

	{

		hanoi(n-1,A,C,B);

	    mov(n,A,C);

	    hanoi(n-1,B,A,C);

	}



}

int main()

{

	int n;

	char A='A',B='B',C='C';

	printf("请输入盘子数:");

	scanf("%d",&n);

	hanoi(n,A,B,C);

	return 0;

}
