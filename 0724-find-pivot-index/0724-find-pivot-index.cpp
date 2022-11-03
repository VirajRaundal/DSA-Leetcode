class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int arrSum = 0;
        int currSum = 0;
        
        for(int i = 0; i<nums.size(); i++) arrSum += nums[i];
        
        for(int i = 0; i<nums.size(); i++){
            
            if(currSum*2 == arrSum-nums[i]) return i;
            currSum += nums[i];
        }
        
        return -1;
    }
};