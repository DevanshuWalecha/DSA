#include<bits/stdc++.h>
using namespace std;

void printArray(int n, int arr[]) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

// Time Complexity: O(n)
int* rotateArray(int n, int arr[]) {
    int temp = arr[n-1];
    for(int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    return arr;
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
    int *p = rotateArray(n, arr);
    printArray(n, p);

    return 0;
}
