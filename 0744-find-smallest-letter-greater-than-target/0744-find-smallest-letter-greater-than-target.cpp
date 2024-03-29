class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        if(target >= letters[letters.size()-1])
            return letters[0];
        
        int start = 0;
        int end = letters.size() - 1;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(target < letters[mid])
                end = mid - 1;
            else if(target >= letters[mid])
                start = mid + 1;
        }
        
        return letters[start];
    }
};