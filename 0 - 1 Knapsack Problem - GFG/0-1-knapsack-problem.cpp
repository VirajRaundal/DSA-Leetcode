//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    
    
    int solve(int W, int wt[], int val[], int n, int i, vector<vector<int>> &dp){
        if(i>=n) return 0;
        
        if(dp[W][i] != -1) return dp[W][i];
        
        //enclude
        int excl = solve(W, wt,  val, n, i+1, dp);
        
        //include
        int incl = 0;
        if(wt[i]<=W)
            incl = solve(W-wt[i], wt,  val, n, i+1, dp) + val[i];
        
        dp[W][i] = max(incl, excl);
        
        return dp[W][i];
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        
        vector<vector<int>> dp (W+1, vector<int> (n+1,-1));
        
       return solve(W, wt,  val, n, 0, dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends