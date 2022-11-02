class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        
        int start = 0;
        int end = n-1;
        int mid = start + (end - start)/2;
        int firstOcc = -1;
        
        while(start <= end){
            if(nums[mid] == target) {
                firstOcc = mid;
                end = mid-1;
            }
            
            else if(nums[mid] > target) end = mid-1;
            else start = mid+1;
            
            mid = start + (end - start)/2;
        }
        
        start = 0;
        end = n-1;
        mid = start + (end-start)/2;
        int lastOcc = -1;
        
        while(start <= end){
            if(nums[mid] == target) {
                lastOcc = mid;
                start = mid +1;
            }
            
            else if(nums[mid] > target) end = mid-1;
            else start = mid+1;
            
            mid = start + (end - start)/2;
        }
        
        return {firstOcc, lastOcc};
        
    }
};