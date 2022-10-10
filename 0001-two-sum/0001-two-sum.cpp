class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*sort(nums.begin(), nums.end());
        int left = 0, right = nums.size()-1, sum = 0;
        
        for(int i:nums){
            sum = nums[left] + nums[right];
            if(sum == target)
                return {left, right};
            else if(sum>target)
                right--;
            else
                left++;
        }
        return {};*/
        
        unordered_map <int, int> sum;
        for(int i = 0; i<nums.size(); i++){
            if(sum.find(target - nums[i])!=sum.end())
                return {sum[target - nums[i]], i};
            
            sum[nums[i]] = i;
        }
        
        return {};
    }
};
