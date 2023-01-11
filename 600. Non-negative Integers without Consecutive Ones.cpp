//we will not take 1 in which 1 is already present in the end
//180-10110100 we will have number 0000000 to 1111111 which is f(7)

class Solution {
public:
    int findIntegers(int n) {
        //10^9 is 31 bits max
        int fib[31];
        fib[0]=1;
        fib[1]=2;
        for(int i=2;i<30;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        int  ans=0,count=30,prev_bit_one=0;
        while(count>=0){
            if(n & (1 << count)){
                ans+=fib[count];
                if(prev_bit_one) return ans;
                prev_bit_one=1;
            }
            else{
                prev_bit_one=0;
            }
            count--;
        }
        return ans+1;
      
        
    }
};
