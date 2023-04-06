class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = 0;
        
        while(start<=end){
            int mid = end - (end-start)/2;
            
            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
                ans = mid;
                return mid;
            }
                
            else if(arr[mid] > arr[mid+1]) 
                end = mid-1;
            else 
                start = mid+1;
        }
        
        return ans;
        
    }
};