#include <stdio.h>
int main()
{
    unsigned int n,a,d,i,j;
    while (1)
    {
        scanf("%u",&n);
        if (n==0)
        {
            break;
        }

        a=n/2;

        d=0;

        for (i=1; i<=a; i++)
        {
            if (n%i==0)
            {
                d++;
            }
        }
        if (d%2==0)
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

