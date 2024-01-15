#include <stdio.h>
int main()
{
    int n,l,i,j;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&l);
        int A[l];
        for (i=0;i<l;i++)
        {
            scanf("%d",&A[i]);
        }
        int count=0;
        for (i=0;i<l-1;i++)
        {
            for (j=i+1;j<l;j++)
            {
                if (A[i]>A[j])
                {
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }



    return 0;
}
