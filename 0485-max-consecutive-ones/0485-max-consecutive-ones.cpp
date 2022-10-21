class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0;
        int max = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i]==0) temp = 0;
            
            else{
                temp++;
                max = std::max(temp,max);
            }
        }
        
        return max;
    }
};