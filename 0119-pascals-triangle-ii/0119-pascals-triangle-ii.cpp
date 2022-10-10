class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans;
        
        if(rowIndex==0) return {1};
        ans.push_back(1);
        long temp = 1;
        
        for(int i = 1, high = rowIndex, low = 1; i<rowIndex; i++, high--, low++){
            temp = temp*high/low;
            ans.push_back(temp);
        }
        
        ans.push_back(1);
        
        return ans;
        
    }
};