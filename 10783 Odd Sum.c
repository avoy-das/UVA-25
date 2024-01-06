
#include <stdio.h>
int main() {
   int n,i;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       int a,b;
       scanf("%d\n%d",&a,&b);
       int sum = 0;
       for (;a<=b;a++)
       {
           if (a%2!=0)
           {
               sum+=a;
           }
       }

   printf("Case %d: %d\n",i,sum);
   }

    return 0;
}
