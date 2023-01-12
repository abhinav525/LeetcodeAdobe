//brute force two pointer and find each character  and kept on increasing pointer if you  get the matching character. 
//Optimize using map- we will store character and their positio of occurences. now we will match the char with map //and return their posi but we will not take the char which are not in order of main string.
//for this we will take char which will be next or after of last char
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<char,vector<int>>m;
        int i=0;
        for(auto x:s)
          m[x].push_back(i++);
        int count =0;
        for(int i=0;i<words.size();i++){
            string curr=words[i];
             int latest=-1;
            for(int j=0;j<curr.size();j++){
                
                auto it= upper_bound(m[curr[j]].begin(),m[curr[j]].end(),latest);
                // gives the reference to the occurence of the chracter after a particular value.
                if(it==m[curr[j]].end()) break;
                latest=*it;
                if(j==curr.size()-1) count++;



            }
        }
        return count;
        
    }
};
