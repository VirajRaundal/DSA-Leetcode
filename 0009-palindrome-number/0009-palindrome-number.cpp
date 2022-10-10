class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0 || (x%10 ==0 && x!=0)){
            return false;
        }
           
        int half = 0;
        
        for(;x>half;x/=10){
            half = half*10 + x%10;
        }
           
        if(x==half || x==half/10)
           return true;
         
        else
           return false;
}};