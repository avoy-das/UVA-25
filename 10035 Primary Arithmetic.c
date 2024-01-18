#include <stdio.h>
int main()
{
    long long int a,b;
    while (scanf("%lld %lld",&a,&b)!= EOF)
    {
        if (a==0 && b==0)
        {
            break;
        }
        long long int r,r1,r2,c=0,x=0;
        while (a>0 || b>0)
        {
            r1=a%10;
            r2=b%10;
            a/=10;
            b/=10;
            r=r1+r2+x;
            if (r>9)
            {
                x=1;
                c++;
            }
            else
                x=0;


        }
        if (c==0)
            printf("No carry operation.\n");
        else if (c==1)
            printf("1 carry operation.\n");
        else
            printf("%lld carry operations.\n",c);

    }

    return 0;
}
