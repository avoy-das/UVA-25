#include <stdio.h>
int main()
{
    char text;
    int c;
    while (scanf("%c",&text)!=EOF)
    {
        if (text == '"')
        {

            c++;
            if (c%2!=0)
            {
                printf("``");
            }
            else
            {
                printf("''");
            }
        }
        else printf("%c",text);
    }

    return 0;
}
