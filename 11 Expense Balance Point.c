#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int total = 0;
    for(i = 0; i < n; i++)
        total = total+arr[i];

    int left = 0;
    for(i = 0; i < n; i++) {
        total = total-arr[i];   
        if(left == total) {
            printf("%d", i);
            return 0;
        }
        left = left+arr[i];
    }

    printf("-1");
    return 0;
}