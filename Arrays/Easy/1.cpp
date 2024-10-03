//Largest Element in an Array

#include <bits/stdc++.h>

using namespace std;
int findLargestElement(int arr[], int n) {

int max = arr[0];
for (int i = 0; i < n; i++) {
if (max < arr[i]) {
    max = arr[i];
}
}
return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    int ans = findLargestElement(arr,n);
    cout<<ans;
    return 0;

}