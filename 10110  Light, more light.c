#include <stdio.h>
#include <math.h>
int main()
{
    while (1)
    {
        int n,r;
        scanf("%d",&n);
        if (n==0)
        {
            break;
        }
        r=sqrt(n);
        if (r*r==n)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }

    }
    return 0;
}
