class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        //contains all the possible mutations.
        unordered_set<string> str{bank.begin(), bank.end()};
        
        //if end mutation is not in the list then return -1.
        if(!str.count(end)) return -1;
        
        //start BFS by pushing the starting mutation.
        queue<string> Q;
        Q.push(start);
        
        int steps = 0, s;
        string curr, t;
        
        while(!Q.empty()){
            s = Q.size();
            
            while(s--){
                curr = Q.front();
                Q.pop();
                
                //if we reach end mutation.
                if(curr == end) return steps;
                    
                //erase the curr mutation inorder to avoid redundant checking.
                str.erase(curr);
                //as the length of mutation is 8 and it can take A,C,G,T.
                //at each index, we check the possibility of mutation by replacing it with A,C,G,T
                for(int i = 0; i<8; i++){
                    t = curr;
                    t[i] = 'A';
                    if(str.count(t)) Q.push(t);
                    t[i]='C';
				    if(str.count(t)) Q.push(t);
				    t[i]='G';
				    if(str.count(t)) Q.push(t);
				    t[i]='T';
				    if(str.count(t)) Q.push(t);
                }
            }
            
            steps++;
        }
        return -1;
        
    }
};