class Solution {
public:
    bool isSubsequence(string s, string t) {
    int j = 0;
	
	for(int i = 0; i<t.length();i++){
			if(s[j]==t[i])
				j++;
        //cout<<"j = "<<j<<" i = "<< i<<endl;
	}
	
	return j == s.length();
    }
};