#include <stdio.h>
#include <string.h>
int main()
{
    int n, c, i;
    char t[1000];
    while (gets(t) != '\0')
    {
        c = 0;
        n = strlen(t);
        for (i = 0; i < n; i++)
        {
            if ((t[i] >= 'A' && t[i] <= 'Z') || (t[i] >= 'a' && t[i] <= 'z'))
            {
                c++;
                while ((t[i] >= 'A' && t[i] <= 'Z') || (t[i] >= 'a' && t[i] <= 'z'))
                {
                    i++;
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
