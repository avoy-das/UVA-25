#include <stdio.h>
int main()
{
    int i,B[3],G[3],C[3],r[6],min;
    while (scanf("%d %d %d %d %d %d %d %d %d", &B[0], &G[0], &C[0], &B[1],&G[1], &C[1], &B[2], &G[2], &C[2]) != EOF)
    {
        r[0]= G[0] + C[0] +  B[1] + G[1] + B[2] + C[2];
        r[1]= G[0] +C[0] +  B[1] + C[1] + B[2] + G[2];
        r[2]= B[0] + G[0] + C[1] + G[1] + B[2] + C[2];
        r[3]= B[0] + G[0] + B[1] + C[1] + G[2] + C[2];
        r[4]= B[0] +C[0] +  C[1] + G[1] + B[2] + G[2];
        r[5]= B[0] +C[0] +  B[1] + G[1] + G[2] + C[2];
        min=r[0];
        for (i = 1; i < 6; i++)
        {
            if (r[i] < min)
            {
                min = r[i];
            }
        }


        if (min == r[0]) {printf("BCG");}
        else if (min == r[1]) {printf("BGC");}
        else if (min == r[2]) {printf("CBG");}
        else if (min == r[3]) {printf("CGB");}
        else if (min == r[4]) {printf("GBC");}
        else if (min == r[5]) {printf("GCB");}

        printf(" %d\n",min);

    }
    return 0;
}
