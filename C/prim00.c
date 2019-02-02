#include <stdio.h>
#define MAXN 100
#define INF 100001
void prim(int [][MAXN], int [], int);
int main(void)
{
    int i, j, t, n;
    int w[MAXN][MAXN], fa[MAXN];
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++ )
        {
            scanf("%d", &t);
            w[i][j] = (t == 0) ? INF : t;
        }
    prim(w, fa, n);
    for(i = 2; i <= n; i++)
        printf("%c--->%c\n", i+96, fa[i]+96);
    return 0;
}
void prim(int w[][MAXN], int fa[], int n)
{
    int i, j, m, k;
    int d[MAXN];
    for(j = 1; j <= n; j++)
    {
        d[j] = (j == 1 ? 0 : w[1][j]);
        fa[j] = 1;
    }
    for(i = 2; i <=n; i++)
    {
        m = INF;
        for(j = 1; j <= n; j++)
            if(d[j] <= m && d[j] != 0) m = d[k = j];
        d[k] = 0;
        for(j = 1; j <= n; j++)
            if(d[j] > w[k][j] && d[j] != 0)
            {
                d[j] = w[k][j];
                fa[j] = k;
            }
    }
}
