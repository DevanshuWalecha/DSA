#include<bits/stdc++.h>
using namespace std;

// Time Complexity = O(n)
void reverseAnArray(int n, int arr[]) {
    int temp;
    for (int i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

void printArray(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main() {
    int n;
    cin>>n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<"Original Array: ";
    printArray(n, arr);
    reverseAnArray(n, arr);
    cout<<"Reversed array: ";
    printArray(n, arr);
}
