class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals; //Data Structure to store the merged Intervals.
        
        if(intervals.size()==0) return intervals; //If the given array is empty then return the empty array.
        
        sort(intervals.begin(), intervals.end()); //Sorting the given array.
        
        vector<int> tempInterval = intervals[0]; //We will temporarily store the interval at hand in this datastructure.
        
        //For loop to interate through the given array. We will see whether the intervals can be merged or not.
        for(auto it:intervals){
            if(it[0]<= tempInterval[1])
                tempInterval[1] = max(it[1], tempInterval[1]);
            else{
                mergedIntervals.push_back(tempInterval);
                tempInterval = it;
            }
        }
        
        mergedIntervals.push_back(tempInterval); //Adding the merged Intervals into the appropriate Data Structure.
        return mergedIntervals;
    }
};