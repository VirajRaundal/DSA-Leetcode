class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = -1, count1 = 0;
        int num2 = -1, count2 = 0;
        int n = nums.size()/3;
        
        
        for(auto ele:nums){
            if(ele == num1) count1++;
            
            else if(ele == num2) count2++;
            
            else if(count1 == 0){
                num1 = ele;
                count1++;
            }
            
            else if(count2 == 0){
                num2 = ele;
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        //Confirming if num1 and num2 are the answers.
        int c1=0, c2=0;
        
        for(auto ele:nums){
            if(ele==num1) c1++;
            else if(ele==num2) c2++;
        }
        
        if(c1>n && c2>n) return {num1,num2};
        else if(c1>n) return {num1};
        else if(c2>n) return {num2};
        else return {};
    }
};