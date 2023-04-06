class Solution {
public:
    
    int firstOcc(vector<int>&nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int firstOcc = -1;
        
        while(start<=end){
            int mid = end - (end-start)/2;
            
            if(nums[mid]<target) start = mid+1;
            
            else if(nums[mid]>target) end = mid-1;
            
            else {
                firstOcc = mid;
                end = mid - 1;
            }
        }
        
        return firstOcc;
    }
    
    int lastOcc(vector<int>&nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int lastOcc = -1;
        
        while(start<=end){
            int mid = end - (end-start)/2;
            
            if(nums[mid]<target) start = mid+1;
            
            else if(nums[mid]>target) end = mid-1;
            
            else {
                lastOcc = mid;
                start = mid + 1;
            }
        }
        
        return lastOcc;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        return{firstOcc(nums, target), lastOcc(nums,target)};
        
    }
};