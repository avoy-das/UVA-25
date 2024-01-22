#include <stdio.h>
int main()
{
    char x[101][101];
    int y[101][101];
    int r,c,i,j,field=1;
    while (scanf("%d %d",&r,&c)!=EOF)
    {

        if (r==0 && c==0)
        {
            break;
        }
        for (i=1; i<=r; i++)
        {
            for(j=1; j<=c; j++)
            {
                scanf(" %c",&x[i][j]);
                y[i][j]=0;
            }

        }

        for (i=1; i<=r; i++)
        {
            for (j=1; j<=c; j++)
            {
                if (x[i][j]=='*')
                {
                    y[i-1][j-1]++;
                    y[i-1][j]++;
                    y[i-1][j+1]++;
                    y[i][j-1]++;
                    y[i][j+1]++;
                    y[i+1][j-1]++;
                    y[i+1][j]++;
                    y[i+1][j+1]++;
                }
            }
        }
        if (field!=1)
            printf("\n");
        printf("Field #%d:\n",field++);
        for (i=1; i<=r; i++)
        {
            for (j=1; j<=c; j++)
            {
                if (x[i][j]=='*')
                    printf("*");
                else printf("%d",y[i][j]);
            }
            printf("\n");
        }


    }


    return 0;
}

