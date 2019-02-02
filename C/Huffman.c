#include <stdio.h>
#include<stdlib.h>
#define MAXBIT      100
#define MAXVALUE    10000
#define MAXLEAF     30
#define MAXNODE     MAXLEAF*2 -1
//*Huffman���Ĵ洢�ṹ
typedef struct
{
    int bit[MAXBIT];
    int start;
} HCodeType;

//*Huffman���н��Ĵ洢�ṹ
typedef struct
{
    int weight;    //*�ýڵ�Ȩֵ
    int parent;
    int lchild;
    int rchild;
    int value;
} HNodeType;

/*���Խṹ��ʵ�ֵĹ��������㷨*/
void HuffmanTree (HNodeType HuffNode[MAXNODE],  int n)
{
    int i, j;           // i��j�� ѭ������
    int m1, m2;         //m1��m2�����ڼ�¼������С��ȫְȨֵ
    int x1, x2;         //x1,x2���ڼ�¼Ȩֵ��С���������������е�λ��

    for (i=0; i<2*n-1; i++)         // ��ʼ����Ź����������� HuffNode[] �еĽ��
    {
        HuffNode[i].weight = 0;     //Ȩֵ
        HuffNode[i].parent =-1;
        HuffNode[i].lchild =-1;
        HuffNode[i].rchild =-1;
        HuffNode[i].value=i;         //ʵ��ֵ���ɸ�������滻Ϊ��ĸ
    } /* end for */

    for (i=1; i<=n; i++)             //���� n ��Ҷ�ӽ���Ȩֵ
    {
        printf ("Please input weight of leaf node s%d: \n",i );
        scanf ("%d", &HuffNode[i].weight);
    }

    for (i=0; i<n-1; i++)       // ѭ������ Huffman ��
    {
        m1=m2=MAXVALUE;          // m1��m2�д�������޸�����ҽ��Ȩֵ��С���������
        x1=x2=0;
    for (j=0; j<n+i; j++)       // �ҳ����н����Ȩֵ��С���޸�����������㣬���ϲ�֮Ϊһ�Ŷ�����
    {
        if (HuffNode[j].weight < m1 && HuffNode[j].parent==-1)
            {
                m2=m1;
                x2=x1;
                m1=HuffNode[j].weight;
                x1=j;
            }
            else if (HuffNode[j].weight < m2 && HuffNode[j].parent==-1)
            {
                m2=HuffNode[j].weight;
                x2=j;
            }
        }
        HuffNode[x1].parent  = n+i;
        HuffNode[x2].parent  = n+i;
        HuffNode[n+i].weight = HuffNode[x1].weight + HuffNode[x2].weight;
        HuffNode[n+i].lchild = x1;
        HuffNode[n+i].rchild = x2;
        printf ("x1.weight and x2.weight in round %d: %d, %d\n", i+1, HuffNode[x1].weight, HuffNode[x2].weight);  /* ���ڲ��� */
        printf ("\n");
    }
}

void decodeing(char string[],HNodeType Buf[],int Num)       //����
{
  int i,tmp=0,code[1024];
  int m=2*Num-1;
  char *nump;
  char num[1024];
  for(i=0;i<strlen(string);i++)
  {
   if(string[i]=='0')
  num[i]=0;
  else
  num[i]=1;
  }
  i=0;
  nump=&num[0];

 while(nump<(&num[strlen(string)]))
 {
     tmp=m-1;
     while((Buf[tmp].lchild!=-1)&&(Buf[tmp].rchild!=-1))
        {
            if(*nump==0)
                {
                    tmp=Buf[tmp].lchild ;
                }
            else tmp=Buf[tmp].rchild;
                 nump++;
        }
  printf("%d",Buf[tmp].value);
 }
}

int main(void)
{
    HNodeType HuffNode[MAXNODE];            /* ����һ�����ṹ������ */
    HCodeType HuffCode[MAXLEAF],  cd;       /* ����һ������ṹ�����飬 ͬʱ����һ����ʱ���������������ʱ����Ϣ */
    int i, j, c, p, n;
    char pp[100];
    printf ("Please input n:\n");
    scanf ("%d", &n);
    HuffmanTree (HuffNode, n);
    for (i=0; i < n; i++)
    {
        cd.start = n-1;
        c = i;
        p = HuffNode[c].parent;
        while (p != -1)   /* �������� */
        {
            if (HuffNode[p].lchild == c)
                cd.bit[cd.start] = 0;
            else
                cd.bit[cd.start] = 1;
            cd.start--;        /* �����ĵ�һλ */
            c=p;
            p=HuffNode[c].parent;    /* ������һѭ������ */
        } /* end while */

        for (j=cd.start+1; j<n; j++)        //���������ÿ��Ҷ���Ĺ���������ͱ������ʼλ
        { HuffCode[i].bit[j] = cd.bit[j];}
        HuffCode[i].start = cd.start;
    }

    for (i=1; i<=n; i++)         // ����ѱ���õ����д��ڱ���Ĺ���������
    {
        printf ("s%d 's Huffman code is: ", i);
        for (j=HuffCode[i].start+1; j < n; j++)
        {
            printf ("%d", HuffCode[i].bit[j]);
        }
        printf(" start:%d",HuffCode[i].start);
        printf ("\n");
    }
    printf("Decoding?Please Enter code:\n");
    scanf("%s",&pp);
    decodeing(pp,HuffNode,n);
    getch();
    return 0;
}
