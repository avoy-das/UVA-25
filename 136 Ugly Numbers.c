#include <stdio.h>
int main()
{
    printf("The 1500'th ugly number is 859963392.\n");
    return 0;
}

/*
#include <stdio.h>

int main()
{
    int i = 1, c = 0;

    while (1)
    {
        int n = i;

        while (n % 2 == 0)
        { n /= 2; }

        while (n % 3 == 0)
        { n /= 3; }

        while (n % 5 == 0)
        { n /= 5; }

        if (n == 1)
        { c++; }

        if (c == 1500)
        { break; }

        i++;
    }

    printf("The 1500'th ugly number is %d.\n", i);

    return 0;
}
*/

