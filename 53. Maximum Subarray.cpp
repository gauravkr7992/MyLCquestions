
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int resSum=0;
        int Max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            resSum+=nums[i];
            Max=max(Max,resSum);
            if(resSum<0) resSum=0;

        }
        return Max;
    }
};



// Kedane's Algorithm O(n)
