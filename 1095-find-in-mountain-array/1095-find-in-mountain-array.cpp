/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    
    int search(int target, MountainArray &mountainArr, int peak){
        
        int start = 0;
        int end = mountainArr.length() - 1;
        
        int ans = binSearch(target, mountainArr, start, peak);
        if(ans != -1) return ans;
        
        return binSearch(target, mountainArr, peak+1, end);
    }
    
    int binSearch(int target, MountainArray &mountainArr, int start, int end){
        
        bool isAsc = mountainArr.get(start) < mountainArr.get(end);
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(mountainArr.get(mid)==target)
                return mid;
            
            if(isAsc){
                if(target<mountainArr.get(mid)) end = mid - 1;
                
                else start = mid + 1;
            }
            
            else{
                if(target > mountainArr.get(mid)) end = mid - 1;
                
                else start = mid + 1;
            }
        }
        
        return -1;
    }
    
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int start = 0;
        int end = mountainArr.length() - 1;
        int mid;
        
        while(start<end){
            mid = start + (end-start)/2;
            
            if(mountainArr.get(mid) > mountainArr.get(mid+1)) end = mid;
            else start = mid + 1;
            
            //else if(mountainArr.get(mid) > mountainArr.get(mid-1)) start = mid+1;
        }
        
        return search(target, mountainArr, start);
    }
};