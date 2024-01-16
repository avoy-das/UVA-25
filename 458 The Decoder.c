#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char text[1000];
    while(scanf("%s",text)!=EOF)
    {
        for(i=0;i<strlen(text);i++)
        {
            printf("%c",text[i]-7);
        }
        printf("\n");
    }
    return 0;
}
