#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;

    while (scanf("%d", &n) != EOF)
    {
        int a[n],d[n];

        for (i = 0; i < n; i++)
        { scanf("%d", &a[i]); }

        for (i = 0; i < n - 1; i++)
        { d[i] = abs(a[i] - a[i + 1]); }

        int J = 1;
        int repeat[3000] = {0};

        for (i = 0; i < n - 1; i++)
        {
            if ( d[i] >= n ||d[i] == 0 ||  repeat[d[i]])
            {
                J = 0;
                break;
            }
            repeat[d[i]] = 1;
        }
        if (J)
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }

    return 0;
}
