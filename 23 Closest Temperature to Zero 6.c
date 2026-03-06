#include <stdio.h>

int main()
{
    int n, a[100];
    int closest, diff, minDiff;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    closest = a[0];

    if(a[0] < 0)
        minDiff = -a[0];
    else
        minDiff = a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i] < 0)
            diff = -a[i];
        else
            diff = a[i];

        if(diff < minDiff || (diff == minDiff && a[i] > closest))
        {
            minDiff = diff;
            closest = a[i];
        }
    }

    printf("%d",closest);

    return 0;
}