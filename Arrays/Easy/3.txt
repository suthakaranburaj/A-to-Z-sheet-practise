    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        // Check if the array is non-decreasing
        for (int i = 1; i < n; i++)
            {
                if (nums[i - 1] > nums[i])
                count++;
            }
        
        // Check if the last element is greater than the first element
        if (nums[n - 1] > nums[0])
            count++;
        
        // If the count of violations is less than or equal to 1, return true
        return count <= 1;
    }


    //Algorithm
    check karna hai ki is there any number where nums[i-1] > nums[i]
    ek hi bar hona chaiye so usse count me maintain karenge
    fir check karna hai ki 1st element < last element 
    if false then +1 count

    at last if count is <=1 then return true else false
