#include <stdio.h>

int main()
{
    long int t, n, x, y, i, j;
    scanf("%ld", &t);
    for (i = 0; i < t; i++)
    {
        j = 0;
        y = 0;
        scanf("%ld", &n);
        if (n % 21 == 0)
            y = 1;
        else
        {
            while (1)
            {
                x = n % 10;
                n /= 10;
                if (x == 1)
                {
                    y = n % 10;
                    if (y == 2)
                    {
                        y = 1;
                        break;
                    }
                }
                else //author Anas Khan
                {
                    if (n == 0)
                        break;
                }
            }
        }
        if (y == 1)
            printf("The streak is broken!\n");
        else
            printf("The streak lives still in our heart!\n");
    }
    return 0;
}