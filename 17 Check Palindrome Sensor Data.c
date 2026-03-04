#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n/2; i++) {
        if(arr[i] != arr[n-1-i]) {
            printf("No");
            return 0;
        }
    }

    printf("Yes");
    return 0;
}