class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long m=LONG_LONG_MAX;
        long long s=0;
        long long count=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                if(matrix[i][j]<0){
                    if((-1*matrix[i][j])<m)
                        m=(-1*matrix[i][j]);
                }
                else{

                    if((matrix[i][j])<m)
                     m=(matrix[i][j]);
                }
                if(matrix[i][j]<0){
                    count++;
                    s+=(-1*matrix[i][j]);
                }
                else{
                    s+=(matrix[i][j]);
                }
            }
           
        }
        if(count%2==0)
         return s;
        else 
         return s-2*(m);
        
        
    }
};
