#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,n;
    while (scanf("%lf\n%lf",&a,&b) != EOF)
    {
        n=pow(b,1/a);
        printf("%.0lf\n",n);

    }

    return 0;
}
