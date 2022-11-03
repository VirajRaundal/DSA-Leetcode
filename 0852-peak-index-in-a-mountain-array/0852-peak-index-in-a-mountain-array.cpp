class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int l = 0;
        int r = arr.size() - 1;
        int mid = l + (r-l)/2;
        
        while(l<=r){
            if(arr[mid]<arr[mid+1]) l = mid+1;
            else if(arr[mid]>arr[mid+1]) r = mid-1;
            
            mid = l + (r-l)/2;
        }
        
        return mid;
        
    }
};