//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &v) {
        sort(v.begin(),v.end());
        int r=v.size()-1;
        int l=0;
        vector<int>ans;
        int ansf=-1;
        int ansc=-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(v[mid]<x){
                ansf=v[mid];
                l=mid+1;
            }
            else if(v[mid]>x){
                ansc=v[mid];
                r=mid-1;
            }
            else{
                ansc=v[mid];
                ansf=v[mid];//hello
                break;
            }
        }
        ans.push_back(ansf);
        // int a= v.size()-1;
        // int b = 0;
        // while(b<=a){
        //     int mid = b+(a-l)/2;
        //     if(v[mid]>=x){
        //         ansc=v[mid];
        //         a=mid-1;
        //     }
        //     else{
        //         b=mid+1;
        //     }
        // }
        ans.push_back(ansc);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends