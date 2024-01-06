#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,r,t;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf("%d",&n);
        r=n*315+36962;
        if (r<0)
        r=abs(r);
        printf("%d\n",(r/10)%10);
    }

    return 0;
}
