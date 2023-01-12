//bfs lagega->atring k0 check krte gaye aur agar bank m hai to queue m dalte gaye aur agar ek bhi lavel queue ka 
//bank k qual aa jaye to to ans mil jyega
class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set<string> st{bank.begin(),bank.end()};
        if(!st.count(end)) return -1;
        queue<string> Q;
        Q.push(start);
        int steps=0,n;
        while(!Q.empty()){
            n=Q.size();
            while(n--){
                cur=Q.front();
                Q.pop();
                if(curr==end) return steps;
                st.erase(cur);
                for(int i=0;i<8;i++){
                    t=cur;
                    t[i]='A';
                    if(st.count(t)) Q.push(t);//agar humari jo t string bani hai aagr end m present hai to usko push krege
                    t[i]='C';
                    if(st.count(t)) Q.push(t);
                    t[i]='G';
                    if(st.count(t)) Q.push(t);
                    t[i]='T';
                    if(st.count(t)) Q.push(t);
                    
                }
            }
            steps++;
        }
        return -1;
        
        
    }
};
