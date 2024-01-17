#include <stdio.h>
int main()
{
    int x,y,d,n,c,i,temp;
    while (scanf("%d %d",&x,&y)!=EOF)
    {
        printf("%d %d ",x,y);
        if (y>x)
        {
            temp = y;
            y=x;
            x=temp;
        }
        d=x-y+1;
        int a[d];
        for (i=0; x>=y; x--,i++)
        {
            n = x;
            c=0;
            while (n!=1)
            {
                c++;
                if (n%2!=0)
                {
                    n=3*n+1;
                }
                else
                {
                    n=n/2;
                }
            }
            a[i]=c+1;
        }
        int max=a[0];
        for (i=0; i<d; i++)
        {
            if (a[i]>max)
            {
                max = a[i];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
