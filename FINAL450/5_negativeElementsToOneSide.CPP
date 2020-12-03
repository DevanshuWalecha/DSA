#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n)
void negativeElementsToOneSide(int n, int arr[]) {
    int l = 0, r = n-1;
    while(l<=r) {
        if (arr[l]>=0 && arr[r]>0) r--;
        else if (arr[l]>=0 && arr[r]<0) {
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
        else if (arr[l]<0 && arr[r]<0) l++;
        else {
            l++;
            r--;
        }
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
    negativeElementsToOneSide(n, arr);
    printArray(n, arr);
    return 0;
}
