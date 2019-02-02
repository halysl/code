#include <stdio.h>
void prim(int n,int u0,int c[n][n])
{
    bool s[n];
    int closest[n];
    double lowcost[n];
    s[u0]=true;
    for(int i=0;i<n;i++)
        if(i!=0)
        {
        lowcost[i]=C[u0][i];
        closest[i]=u0;
        s[i]=false;
        }
    for(i=0;i<n;i++)
    {
        double temp=255555;
        int t=u0;
        for(int j=0;j<n;j++)
            if((!s[j])&&(lowcost[j]<temp))
        {
            t=j;
            temp=lowcost[j];
        }
        if(t==u0)
            break;
        s[t]=true;
        for(j=0;j<n;j++)
             if((!s[j])&&(C[t][j]<lowcost[j]))
        {
            lowcost[j]=C[t][j];
            closest[j]=t;
        }
    }
}
void main()
{
    int n=5;
    int u0=0;
    int c[n][n]={{0,10,16,7,48},{10,0,9,14,25},{16,9,0,14,12},{7,14,13,0,36},{48,25,12,36,0}};
    prim(n,u0,c[n][n]);
}
