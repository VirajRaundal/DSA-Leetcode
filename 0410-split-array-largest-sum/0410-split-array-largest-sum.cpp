class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start = 0;
        int end = 0;
        
        for(int i = 0; i<nums.size(); i++){
            start = max(start,nums[i]);
            end += nums[i];
        }
        
        while(start < end){
            int mid = start + (end-start)/2;
            
            int sum = 0;
            int pieces = 1;
            
            for(int i = 0; i<nums.size(); i++){
                
                if(sum+nums[i] > mid){
                    sum = nums[i];
                    pieces++;
                }
                
                else sum += nums[i];
            }
            
            if(pieces>k) start = mid+1;
            else end = mid;
        }
        
        
        
    return end;
    }
    
};