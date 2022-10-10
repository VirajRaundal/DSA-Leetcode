class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> pal;
        int odd=0;
        int len = 0;
        
        for(char c:s){
            if(pal[c]) pal[c]++;
            
            else
                pal[c]=1;
        }
        
        for(auto c:pal){
            if(c.second%2!=0)
                odd++;
        }
        
        
        len = s.size() - odd;
        
        if(odd>0)
            len++;
        
        return len;
        
    }
};