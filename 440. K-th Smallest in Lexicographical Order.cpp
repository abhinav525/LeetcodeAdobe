//lexicographical -> 1,10,11,12,13,2,3,4,5,6,7,8,9 ,10 comes before 2 becoz prefix of 10 which is one comes before 2
class Solution {
    public int findKthNumber(int n, int k) {
        long curr=1;
        k-=1;

        while(k>0){
            int nodes=countnodes(n,curr);
            if(k>=nodes){
                curr+=1;
                k-=nodes;
            }else{
                curr*=10;
                k--;
            }

        }
        return (int) curr;
    }
    private int countnodes(long n,long curr){
        long total=0;
        long next=curr+1;
        while(curr<=n){
            total+=Math.min(n-curr+1,next-curr);
            curr*=10;
            next*=10;

        }
        return (int) total;
    }
}
