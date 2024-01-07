#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        int a[3],l,j,k,temp;

        for (j=0; j<3; j++)
        {
            scanf("%d",&a[j]);
        }

        for (j=0; j<3; j++)
        {
            for(k=j+1; k<3; k++)
            {
                if (a[j]>a[k])
                {
                    temp = a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }

        printf("Case %d: %d\n",i,a[1]);

    }


    return 0;
}
