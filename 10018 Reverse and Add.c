#include <stdio.h>
int main()
{
    long long int n,i,c,p,x,reverse,rem,a;
    scanf("%lld",&n);
    for (i=0; i<n; i++)
    {
        scanf("%lld",&p);
        c=0;
        while(1)
        {
            x = p;
            reverse = 0;
            while (p!=0)
            {
                rem=p%10;
                reverse=reverse*10+rem;
                p/=10;
            }
            if (x==reverse)
            {
                break;
            }
            p=x+reverse;
            c++;
        }
        printf("%lld %lld\n",c,x);
    }
    return 0;
}
