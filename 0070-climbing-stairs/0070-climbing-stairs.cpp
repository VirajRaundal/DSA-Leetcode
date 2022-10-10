class Solution {
public:
    int climbStairs(int n) {
        int i = 1;
        int j = 2;
        int fibo = 0;
        
        switch(n){
                case 1: return 1;
                case 2: return 2;
                case 3: return 3;
        }
        
        for(int a = 1; a<n-1 ; a++){
            fibo = i+j;
            i=j;
            j = fibo;
        }
        
        return fibo;
        
        
    }
};