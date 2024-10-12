class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l= 0;
        int j=nums.size()-1;
        int ans=0;
        while(l<=j){
            int mid = l + (j-l)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                l=mid+1;
                ans=mid+1;
            }
        }
        return ans;
    }
};