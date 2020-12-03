#include<stdio.h>

void minMaxOfArray(int n, int arr[]) {
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d %d", min, max);
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    minMaxOfArray(n, arr);
}
