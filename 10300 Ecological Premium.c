#include <stdio.h>
int main()
{
    int n,f,i,j,a,b,c;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&f);
        int sum = 0;
        for (j=0;j<f;j++)
        {
            scanf("%d %d %d",&a,&b,&c);
            sum+=(a*c);
        }
        printf("%d\n",sum);
    }


    return 0;
}
