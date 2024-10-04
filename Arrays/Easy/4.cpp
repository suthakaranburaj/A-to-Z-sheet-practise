//	Remove duplicates from Sorted array
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i] != nums[i-1]){
            nums[j++]=nums[i];
        }
    }
    return j;
    }
};