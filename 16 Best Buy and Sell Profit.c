#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min = arr[0];
    int maxProfit = arr[1] - arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] - min > maxProfit)
            maxProfit = arr[i] - min;

        if(arr[i] < min)
            min = arr[i];
    }

    printf("%d", maxProfit);
    return 0;
}