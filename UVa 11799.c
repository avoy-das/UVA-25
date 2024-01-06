#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        int x,j,l;
        scanf("%d",&x);
        int a[x];
        for (j=0;j<x;j++)
        {
            scanf("%d",&a[j]);
        }
        l=a[0];
        for (j=0;j<x;j++)
        {
            if (a[j]>l)
            {
                l=a[j];
            }

        }
        printf("Case %d: %d\n",i,l);
    }

    return 0;
}
