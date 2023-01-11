//2 1 5 0 4 6 we will initialize two variable left and mid ande declare both as infinity,find any left lesser than current left and find mid greater than mid and return the num which is greater than the mid.
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3) return false;
        int l=INT_MAX;
        int m=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>m) return true;
            else if(nums[i]>l && nums[i]<m)m=nums[i];//new mid
            else if(nums[i]<l)l=nums[i];
        }
        return false;
    }
};
