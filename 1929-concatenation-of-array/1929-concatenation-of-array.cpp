class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        for(int j=0; j<n;j++)
            {
                nums.push_back(nums[j]);
            }
        return nums;
    }
};