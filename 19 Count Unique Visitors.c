#include <stdio.h>

int main() {
    int n,a[100],i,j,count=0,flag;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        count++;
    }

    printf("%d",count);
}