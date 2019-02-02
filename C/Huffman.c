#include <stdio.h>
#include<stdlib.h>
#define MAXBIT      100
#define MAXVALUE    10000
#define MAXLEAF     30
#define MAXNODE     MAXLEAF*2 -1
//*Huffman树的存储结构
typedef struct
{
    int bit[MAXBIT];
    int start;
} HCodeType;

//*Huffman树中结点的存储结构
typedef struct
{
    int weight;    //*该节点权值
    int parent;
    int lchild;
    int rchild;
    int value;
} HNodeType;

/*线性结构上实现的哈夫曼树算法*/
void HuffmanTree (HNodeType HuffNode[MAXNODE],  int n)
{
    int i, j;           // i、j： 循环变量
    int m1, m2;         //m1、m2：用于记录两个最小的全职权值
    int x1, x2;         //x1,x2用于记录权值最小的两棵树在数组中的位置

    for (i=0; i<2*n-1; i++)         // 初始化存放哈夫曼树数组 HuffNode[] 中的结点
    {
        HuffNode[i].weight = 0;     //权值
        HuffNode[i].parent =-1;
        HuffNode[i].lchild =-1;
        HuffNode[i].rchild =-1;
        HuffNode[i].value=i;         //实际值，可根据情况替换为字母
    } /* end for */

    for (i=1; i<=n; i++)             //输入 n 个叶子结点的权值
    {
        printf ("Please input weight of leaf node s%d: \n",i );
        scanf ("%d", &HuffNode[i].weight);
    }

    for (i=0; i<n-1; i++)       // 循环构造 Huffman 树
    {
        m1=m2=MAXVALUE;          // m1、m2中存放两个无父结点且结点权值最小的两个结点
        x1=x2=0;
    for (j=0; j<n+i; j++)       // 找出所有结点中权值最小、无父结点的两个结点，并合并之为一颗二叉树
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
        printf ("x1.weight and x2.weight in round %d: %d, %d\n", i+1, HuffNode[x1].weight, HuffNode[x2].weight);  /* 用于测试 */
        printf ("\n");
    }
}

void decodeing(char string[],HNodeType Buf[],int Num)       //解码
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
    HNodeType HuffNode[MAXNODE];            /* 定义一个结点结构体数组 */
    HCodeType HuffCode[MAXLEAF],  cd;       /* 定义一个编码结构体数组， 同时定义一个临时变量来存放求解编码时的信息 */
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
        while (p != -1)   /* 父结点存在 */
        {
            if (HuffNode[p].lchild == c)
                cd.bit[cd.start] = 0;
            else
                cd.bit[cd.start] = 1;
            cd.start--;        /* 求编码的低一位 */
            c=p;
            p=HuffNode[c].parent;    /* 设置下一循环条件 */
        } /* end while */

        for (j=cd.start+1; j<n; j++)        //保存求出的每个叶结点的哈夫曼编码和编码的起始位
        { HuffCode[i].bit[j] = cd.bit[j];}
        HuffCode[i].start = cd.start;
    }

    for (i=1; i<=n; i++)         // 输出已保存好的所有存在编码的哈夫曼编码
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
