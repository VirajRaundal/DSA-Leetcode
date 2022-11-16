class Solution {
public:
    int reverse(int x) {
        
        //Reversing an integer
        if(x<=INT_MIN || x>=INT_MAX){
            return 0;
        }
        
        long long rev = 0;
        if(x>0){
            for(long long i = x; i>0; i/=10)
                rev = rev*10 + i%10;
        }
        
        else if(x<0){
            for(long long i = -1 * x; i>0; i/=10)
                rev = rev*10 + i%10;
            
            rev = rev*-1;
        }
        return (rev<INT_MIN || rev>INT_MAX) ? 0 : rev;
    }
};