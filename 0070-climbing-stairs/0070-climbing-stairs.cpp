class Solution {
public:
    int climbStairs(int n) {
        int ans = 1;
        int one = 1;
        int two = 1;
        
        for(int i = n-2; i>=0; i--){
            ans = one + two;
            two = one;
            one = ans;
        }
        
        return ans;
    }
};