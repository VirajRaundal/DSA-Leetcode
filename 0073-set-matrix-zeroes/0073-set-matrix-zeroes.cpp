class Solution {
public:
     void setZeroes(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        bool firstRow = false;  // do we need to set first row zero
        bool firstCol = false;  // do we need to ser first col zero
        
        //Setting up flags in the first row and column after checking the elements in the matrix.
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
				if(a[i][j] == 0){   
                    if(i==0) firstRow = true;// Setting the flag for the first row.
                    if(j==0) firstCol = true;// Setting the flag for the first column.
                    
                    a[i][0] = 0; //Setting up the flag for row i.
                    a[0][j] = 0; //Setting up the flag for column j.
                }
        
        //Setting elements in the inner matrix as zeroes according to the flags setup in the first row and column.
        for(int i=1; i<n; i++)
            for(int j=1; j<m; j++)
                if(a[i][0] == 0 || a[0][j] == 0)
                    a[i][j] = 0;
        
        //Setting elements in first row and column as zero if required.
        if(firstRow)
            for(int i=0;i<m;i++) a[0][i] = 0;
        
        if(firstCol)
            for(int i=0;i<n;i++) a[i][0] = 0;
    }
};  