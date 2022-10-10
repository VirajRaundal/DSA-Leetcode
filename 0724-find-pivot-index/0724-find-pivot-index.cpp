class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        
        for(int num:nums)
            total_sum+=num;
        
        int sum = 0;
        
        for(int i = 0; i<nums.size(); i++){
            if(sum*2==total_sum-nums[i])
                return i;
            sum+=nums[i];
        }
        
        return -1;
    }
};