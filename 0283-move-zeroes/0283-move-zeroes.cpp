class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1 = 0;
        int p2 = 1;
        
        while(p1<nums.size() && p2<nums.size()){
            if(nums[p1]== 0 && nums[p2] == 0){
                p2++;
            }
            
            else if(nums[p1] == 0){
                swap(nums[p1], nums[p2]);
                p1++;
                p2++;
            }
            
            else if(nums[p2] == 0){
                p1++;
                p2++;
            }
            
            else{
                p1++;
                p2++;
            }
        }
    }
};