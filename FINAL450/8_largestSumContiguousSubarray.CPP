#include<bits/stdc++.h>
using namespace std;

int largestSumContigousSubarray(int n, int arr[], int* start, int* end) {
    int max_so_far = INT_MIN, max_ending_here = 0;
    int s = 0;
    for (int i = 0; i < n; i++) {
        max_ending_here += arr[i];
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
            *start = s;
            *end = i;
        }
        if (max_ending_here < 0) {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    return max_so_far;
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
    int start = 0, end = 0;
    int maxSum = largestSumContigousSubarray(n, arr, &start, &end);
    cout<<"Largest Sum Contiguous Subarray: "<<maxSum;
    cout<<"\nStart: "<<start<<"\nEnd:"<<end;

    return 0;
}
