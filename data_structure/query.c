#include <stdio.h>
struct query
{
	int date[100];
	int head;
	int tail;
};
int main()
{
	int i,n,a[100];
	struct query q;
	q.head = 0;
	q.tail = 0;

	printf("how many number:");
	scanf("%d",&n);
	printf("please input origin date:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&q.date[i]);
		q.head++;
	}
	printf("origen:");
	for ( i = 0; i < n; i++)
	{
		printf("%d ",q.date[i]);/* code */
	}
	printf("\nnew:");
	for ( i = n; i > 0; i--)
	{
		printf("%d ",q.date[q.head-1]);
		q.head--;
	}

	return 0;

}
