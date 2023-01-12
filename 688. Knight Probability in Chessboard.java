/*problem in recursive is that there is  repeating coordinates that are coming so we will make hashmap for invalid moves

*/
class Solution {
    private int[][] dir={{-2,-1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1}};
    public double knightProbability(int n, int k, int r, int c) {
        HashMap<String,Double>hm=new HashMap<>();
        return find(n,k,r,c,hm);

        
    }
    public double find(int n,int k,int r,int c,HashMap<String,Double>hm){
        if(isvalid(r,c,n)==false) return 0;
        if(k==0) return 1;
        String key=r+"ab"+c+"de"+k;//concantinate the string to make unique key
        if(hm.containsKey(key)) return hm.get(key);
        double Probability = 0;
        for(int i=0;i<dir.length;i++){
            Probability+=find(n,k-1,r+dir[i][0],c+dir[i][1],hm)/8.0;//step ka ek minus kar dege aur direction ko badha dege
        }
        hm.put(key,Probability);
        return Probability;
    }
    private boolean isvalid(int r,int c, int n){
        if(r<0||r>=n||c<0||c>=n) return false;
        return true;
    }
}
