#include <stdio.h>

int main()
{
    int n,a[100];
    int maxProduct;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    maxProduct = a[0] * a[1];

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]*a[j] > maxProduct)
            {
                maxProduct = a[i]*a[j];
            }
        }
    }

    printf("%d",maxProduct);

    return 0;
}