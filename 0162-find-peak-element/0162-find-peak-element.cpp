class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int mid = l + (r-l)/2;
        
        if(l==r) return l;
        
        while(l<r){
            if(nums[mid]<nums[mid+1]) l = mid+1;
            else if(nums[mid]>nums[mid+1]) r = mid;
            
            mid = l + (r-l)/2;
        }
        
        return mid;
    }
};