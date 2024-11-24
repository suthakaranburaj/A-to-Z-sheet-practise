// Example 1:
// Input:
//  [100, 200, 1, 3, 2, 4]

// Output:
//  4

// Explanation:
//  The longest consecutive subsequence is 1, 2, 3, and 4.

// Input:
//  [3, 8, 5, 7, 6]

// Output:
//  4

// Explanation:
//  The longest consecutive subsequence is 5, 6, 7, and 8.
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int solve(vector<int>arr,int n){
    sort(arr.begin(),arr.end());
    
    int temp=1;
    int ans=1;
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]==1){
            temp++;
            ans = max(ans,temp);
        }
        else{
            temp=0;
        }
    }
    return ans;
}

int main(){
    vector<int>arr{100, 200, 1, 3, 2, 4};
    int n=5;
    int ans = solve(arr,n);
    cout<<ans;
return 0;
}