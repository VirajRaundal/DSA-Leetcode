class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = 0;
        int sum = 0;
        
        for(int w:weights) sum += w;
        
        int hi = sum;
        int ans = -1;
        int mid = lo + (hi - lo)/2;
        
        while(lo<=hi){
            if(isPossible(weights, days, mid)) {
                ans = mid;
                hi = mid - 1;
            }
            
            else lo = mid + 1;
            
            mid = lo + (hi - lo)/2;
        }
        return ans;
    }
    
    bool isPossible(vector<int>& weights, int days, int mid){
        int dayCount = 1;
        int weightSum = 0;
        int n = weights.size();
        
        for(int i = 0; i<n; i++){
            if(weightSum + weights[i] <= mid) weightSum += weights[i];
            
            else{
                dayCount++;
                if(dayCount>days || weights[i] > mid)
                    return false;
                weightSum = weights[i];
            }
        }
        
        return true;
    }
};