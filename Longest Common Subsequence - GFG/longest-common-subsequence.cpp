//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int solve(string& s1,string& s2,int i,int j,vector<vector<int>>& dp)
    {
        if(i>=s1.length() || j>=s2.length())
        {
            return 0;
        }
        
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        
        //oehla match
        
        if(s1[i]==s2[j])
        {
            
           dp[i][j] =  1 + solve(s1,s2,i+1,j+1,dp);
        }
        else
        {
            dp[i][j] =  max(solve(s1,s2,i+1,j,dp),solve(s1,s2,i,j+1,dp));
            
        }
        
        
        return dp[i][j];
        
        
        
        //match nhi hua
        
        
        
    }
    int lcs(int n, int m, string s1, string s2)
    {
        
        vector<vector<int>> dp(max(n,m)+1,vector<int>(max(n,m)+1,-1));
        return solve(s1,s2,0,0,dp);
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends