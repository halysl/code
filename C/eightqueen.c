#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <dos.h>
char n[3]={0,0};/*���ڼ�¼�ڼ����*/
int a[8],b[15],c[24],i;
int h[8]={127,177,227,277,327,377,427,477};/*ÿ���ʺ��������*/
int l[8]={252,217,182,147,112,77,42,7};/*ÿ���ʺ��������*/
void *arrow;
void try(int i)
{int j;
for (j=1;j<=8;j++)
if (a[j-1]+b[i+j-2]+c[i-j+7]==3) /*�����i�е�j��Ϊ��*/
{a[j-1]=0;b[i+j-2]=0;c[i-j+7]=0;/*ռ�õ�i�е�j��*/
putimage(h[i-1],l[j-1],arrow,COPY_PUT);/*��ʾ�ʺ�ͼ��*/
delay(500);/*��ʱ*/
if(i<8) try(i+1);
else /*���һ���*/
{n[1]++;if (n[1]>9) {n[0]++;n[1]=0;}
bar(260,300,390,340);/*��ʾ��n���*/
outtextxy(275,300,n);
delay(3000);
}
a[j-1]=1;b[i+j-2]=1;c[i-j+7]=1;
putimage(h[i-1],l[j-1],arrow,XOR_PUT);/*��ȥ�ʺ󣬼���Ѱ����һ���*/
delay(500);
}
}
int main(void)
{int gdrive=DETECT,gmode,errorcode;
unsigned int size;
initgraph(&gdrive,&gmode,"");
errorcode=graphresult();
if (errorcode!=grOk)
{printf("Graphics error ");exit(1);}
rectangle(50,5,100,40);
rectangle(60,25,90,33);
/*���ʹ�*/
line(60,28,90,28);line(60,25,55,15);
line(55,15,68,25);line(68,25,68,10);
line(68,10,75,25);line(75,25,82,10);
line(82,10,82,25);line(82,25,95,15);
line(95,15,90,25);
size=imagesize(52,7,98,38); arrow=malloc(size);
getimage(52,7,98,38,arrow);/*�ѻʹڱ��浽������*/
clearviewport();
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
setusercharsize(3, 1, 1, 1);
setfillstyle(1,4);
for (i=0;i<=7;i++) a[i]=1;
for (i=0;i<=14;i++) b[i]=1;
for (i=0;i<=23;i++) c[i]=1;
for (i=0;i<=8;i++) line(125,i*35+5,525,i*35+5);/*������*/
for (i=0;i<=8;i++) line(125+i*50,5,125+i*50,285);
try(1);/*���õݹ麯��*/
delay(3000);
closegraph();
free(arrow);
}
