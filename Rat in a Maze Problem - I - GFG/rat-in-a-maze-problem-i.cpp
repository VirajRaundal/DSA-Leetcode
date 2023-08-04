//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    
    private:
    
        bool isSafe(int x, int y, vector<vector<int>> &m, vector<vector<int>> &visited, int n){
            if(x>=0 && y>=0 && x<n && y<n && m[x][y]==1 && visited[x][y] == 0) 
                return true;
            else{
                return false;
            }
        }
        
        void solve(vector<string> &ans, vector<vector<int>> &m, vector<vector<int>> &visited, 
                    int x, int y, int n, string path){
            
            if(x==n-1 && y==n-1){
                ans.push_back(path);
                return;
            }
            
            visited[x][y] = 1;
            
            //4 choices : D, L, R, U
            
            //Down
            int newx = x+1;
            int newy = y;
            if(isSafe(newx, newy, m, visited, n)){
                path.push_back('D');
                solve(ans, m, visited, newx, newy, n, path);
                path.pop_back();
            }
            
            //Left
            newx = x;
            newy = y-1;
            if(isSafe(newx, newy, m, visited, n)){
                path.push_back('L');
                solve(ans, m, visited, newx, newy, n, path);
                path.pop_back();
            }
            
            //Right
            newx = x;
            newy = y+1;
            if(isSafe(newx, newy, m, visited, n)){
                path.push_back('R');
                solve(ans, m, visited, newx, newy, n, path);
                path.pop_back();
            }
            
            //Up
            newx = x-1;
            newy = y;
            if(isSafe(newx, newy, m, visited, n)){
                path.push_back('U');
                solve(ans, m, visited, newx, newy, n, path);
                path.pop_back();
            }
            
            visited[x][y] = 0;
        }
        
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        int srcx = 0;
        int srcy = 0;
        
        if(m[0][0]==0) return {};
        
        vector<vector<int>> visited = m;
        string path="";
        
        
        //Initialized to zero.
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                visited[i][j] = 0;
            }
        }
        
        solve(ans, m, visited, srcx, srcy, n, path);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends