#include <stdio.h>

int main()
{
    int n,a[100];
    int duplicate = 0;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                duplicate = 1;
            }
        }
    }

    if(duplicate==1)
        printf("No");
    else
        printf("Yes");

    return 0;
}