#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <dos.h>
char n[3]={0,0};/*用于记录第几组解*/
int a[8],b[15],c[24],i;
int h[8]={127,177,227,277,327,377,427,477};/*每个皇后的行坐标*/
int l[8]={252,217,182,147,112,77,42,7};/*每个皇后的列坐标*/
void *arrow;
void try(int i)
{int j;
for (j=1;j<=8;j++)
if (a[j-1]+b[i+j-2]+c[i-j+7]==3) /*如果第i列第j行为空*/
{a[j-1]=0;b[i+j-2]=0;c[i-j+7]=0;/*占用第i列第j行*/
putimage(h[i-1],l[j-1],arrow,COPY_PUT);/*显示皇后图形*/
delay(500);/*延时*/
if(i<8) try(i+1);
else /*输出一组解*/
{n[1]++;if (n[1]>9) {n[0]++;n[1]=0;}
bar(260,300,390,340);/*显示第n组解*/
outtextxy(275,300,n);
delay(3000);
}
a[j-1]=1;b[i+j-2]=1;c[i-j+7]=1;
putimage(h[i-1],l[j-1],arrow,XOR_PUT);/*消去皇后，继续寻找下一组解*/
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
/*画皇冠*/
line(60,28,90,28);line(60,25,55,15);
line(55,15,68,25);line(68,25,68,10);
line(68,10,75,25);line(75,25,82,10);
line(82,10,82,25);line(82,25,95,15);
line(95,15,90,25);
size=imagesize(52,7,98,38); arrow=malloc(size);
getimage(52,7,98,38,arrow);/*把皇冠保存到缓冲区*/
clearviewport();
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 4);
setusercharsize(3, 1, 1, 1);
setfillstyle(1,4);
for (i=0;i<=7;i++) a[i]=1;
for (i=0;i<=14;i++) b[i]=1;
for (i=0;i<=23;i++) c[i]=1;
for (i=0;i<=8;i++) line(125,i*35+5,525,i*35+5);/*画棋盘*/
for (i=0;i<=8;i++) line(125+i*50,5,125+i*50,285);
try(1);/*调用递归函数*/
delay(3000);
closegraph();
free(arrow);
}
