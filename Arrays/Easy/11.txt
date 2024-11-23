class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxOnes = 0;
        int tempOnes = 0;
        for(int i=0; i <n;i++){
            if(nums[i] == 1){
                tempOnes++;
            }
            else{
                maxOnes = max(maxOnes,tempOnes);
                tempOnes=0;
            }
        }
        return max(maxOnes,tempOnes);
    }
};