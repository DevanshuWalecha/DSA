#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
void sort012(int n, int arr[]) {
    int i = 0, count0 = 0, count1 = 0, count2 = 0;
    for(i = 0; i < n; i++) {
        switch (arr[i]) {
            case 0: count0++;
                    break;
            case 1: count1++;
                    break;
            case 2: count2++;
                    break;
        }
    }
    i = 0;
    while(count0 > 0) {
        arr[i++] = 0;
        count0--;
    }
    while(count1 > 0) {
        arr[i++] = 1;
        count1--;
    }
    while(count2 > 0) {
        arr[i++] = 2;
        count2--;
    }
}
void printArray(int n, int arr[]) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n] = {0};
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort012(n, arr);
    printArray(n, arr);

    return 0;
}
