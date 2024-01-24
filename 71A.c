#include <stdio.h>
#include <string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for (i=0;i<n; i++)
    {
        char txt[101];
        scanf("%s",txt);
        int a = strlen(txt);
        if (a>10)
        {
        printf("%c%d%c\n",txt[0],(a-2),txt[a-1]);
        }
        else
        {
            printf("%s\n",txt);
        }
    }

    return 0;
}
