#include<bits/stdc++.h>
using namespace std;

void printArray(int n, int arr[]) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

// Expected Time Complexity: O(n^2+m^2)
// Naive approach
void unionOfTwoArray(int n, int m, int arr1[], int arr2[]) {
    int uArr[n+m] = {0}, i = 0, j = 0, k = 0, flag = 0;
    for(j = 0; j < n; j++) {
        flag = 0;
        for(k = 0; k < i; k++) {
            if (uArr[k] == arr1[j]) {
                flag = 1;
                break;
            }
        }
        if (flag != 1) {
            uArr[i++] = arr1[j];
        }
    }
    for(j = 0; j < m; j++) {
        flag = 0;
        for(k = 0; k < i; k++) {
            if(uArr[k] == arr2[j]) {
                flag = 1;
                break;
            }
        }
        if (flag != 1) {
            uArr[i++] = arr2[j];
        }
    }

    printArray(i, uArr);
}

// Time Complexity: O(mlogm+nlogn)
// First Sorting
// Then keeping record of elements printed
// then only print elements that are not present in record and keep updating the record.
void unionOfTwoArray2(int n, int m, int arr1[], int arr2[]) {
    int max1 = arr1[n-1];
    int max2 = arr2[m-1];
    int max12 = max1>max2?max1:max2;
    int record[max12+1] = {0};
    cout<<arr1[0]<<" ";
    ++record[arr1[0]];
    for(int i = 1; i < n; i++) {
        if(arr1[i] != arr1[i-1]) {
            cout<<arr1[i]<<" ";
            ++record[arr1[i]];
        }
    }
    for(int i = 0; i < m; i++) {
        if(record[arr2[i]] == 0) {
            cout<<arr2[i]<<" ";
            ++record[arr2[i]];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;
    int arr1[n+m] = {0}, arr2[m] = {0};
    for(int i = 0; i < n; i++) {
        cin>>arr1[i];
    }
    for(int i = 0; i < m; i++) {
        cin>>arr2[i];
    }
    unionOfTwoArray(n, m, arr1, arr2);
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
    printArray(n,arr1);
    printArray(m, arr2);
    unionOfTwoArray2(n,m,arr1,arr2);

    return 0;
}
