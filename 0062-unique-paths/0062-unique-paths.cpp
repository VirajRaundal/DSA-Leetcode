class Solution {
public:
    /*Recursive Solution (Can be turned into DP)
    
    int countPaths(int i, int j, int n, int m){
        if(i==n-1 && j==m-1) return 1;
        if(i>=n || j>=m) return 0;
        
        else return countPaths(i+1,j) + countPaths(i, j+1);
    }    */
    
    //Combinatorial Solution
    int uniquePaths(int m, int n) {
        int N = n+m-2;
        int r = m-1;
        double res = 1;
        
        for(int i = 1; i<=r; i++)
            res = res*(N-r+i)/i;
        
        return (int)res;
    }
};