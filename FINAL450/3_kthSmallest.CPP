#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(nlogn)
int main() {
    int n;
    cin>>n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int k;
    cin>>k;
    cout<<arr[k-1];
}


/*#include<bits/stdc++.h>
using namespace std;
int main() {

}*/
