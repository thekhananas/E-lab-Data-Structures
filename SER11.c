//author anas khan
//test case 4 not working
#include <stdio.h>
int main()
{
    long long int t, ss[100001], ww[100002], type, x, tim, i, j, k, mid, poi;
    scanf("%lld", &t);
    poi = 1;
    ww[0] = 0;
    ss[0] = 0;
    for (i = 0; i < t; i++)
    {
        scanf("%lld %lld %lld", &type, &x, &tim);
        if (type == 1)
        {
            ss[poi] = tim;
            ww[poi] = x + ww[poi - 1];
            poi++;
        }
        else if (type == 2)
        {
            j = 1;
            k = poi - 1;
            while (j <= k)
            {
                mid = (j + k) / 2;
                if ((tim - ss[mid]) < x)
                    k = mid - 1;
                else
                    j = mid + 1;
            }
            if (mid < 0)
                mid = 0;
            if (mid >= poi)
                mid = poi - 1;
            if ((tim - ss[mid]) > x)
                mid = mid + 1;
            else if ((tim - ss[mid]) <= x)
            {
                if (mid - 1 >= 0 && (tim - ss[mid - 1]) <= x)
                    mid = mid - 1;
            }
            if (mid == 0)
                printf("%lld\n", ww[poi - 1] - ww[mid]);
            else
                printf("%lld\n", ww[poi - 1] - ww[mid - 1]);
        }
    }
    return 0;
}