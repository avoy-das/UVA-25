#include <stdio.h>
int main()
{
    int x=1;
    while (x)
    {
    char M[100][100];
    int i,j,r,c,a,b;
    scanf("%d %d",&r,&c);
    if (r == 0 && c == 0)
    {
        break;
    }
    for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
            scanf("%c",&M[i][j]);
        }
    }
    int count = 0;
    for (a=i-1; a<=i+a; a++)
    {
        for (b=j-1; b<=j+1; b++)
        {
            if (M[a][b]=='*')
                count++;
        }
    }
    printf("*d\n",count);

    x++;
    }



    return 0;
}
