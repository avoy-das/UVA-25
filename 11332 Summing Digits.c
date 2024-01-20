#include <stdio.h>
int main()
{
    long long int n,i,sum;
    while (scanf("%lld",&n)!= EOF && n!=0)
    {
        while (n>=10)
        {
            sum = 0;
            while(n>0)
            {
                sum+=(n%10);
                n/=10;
            }
            n=sum;
        }

        printf("%lld\n",n);
    }

    return 0;
}
