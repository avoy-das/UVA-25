#include <stdio.h>

int main()
{
    int x=1;
    while(x)
    {
        int n,sum=0,i,avg;
        scanf("%d",&n);
        int a[n];
        if(n==0)
        {
            break;
        }
        for (i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        avg = sum/n;
        int sum2=0,r;
        for (i=0;i<n;i++)
        {
            if (a[i]>avg)
            {
                r=a[i]-avg;
                sum2+=r;
            }

        }
    printf("Set #%d\n",x);
    printf("The minimum number of moves is %d.\n\n",sum2);
    x++;
    }

    return 0;
}
