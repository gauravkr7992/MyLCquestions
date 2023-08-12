
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        if(nums.size()<4) return v;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int l=j+1;
                int h=nums.size()-1;
                long long res=1LL*target-1LL*nums[i]-1LL*nums[j];
                while(h>l){
                    if(nums[l]+nums[h]>res) h--;
                    else if(nums[l]+nums[h]<res) l++;
                    else{
                        vector<int> v1;
                        v1.push_back(nums[i]);
                        v1.push_back(nums[j]);
                        v1.push_back(nums[l]);
                        v1.push_back(nums[h]);
                         v.push_back(v1);
                         while(l<h && nums[l]==v1[2]) ++l;
                         while(l<h && nums[h]==v1[3]) --h;
                        
                    }
                   
                }
                while(j+1<nums.size()&&nums[j+1]==nums[j]) ++j;

            }
            while(i+1<nums.size()&&nums[i+1]==nums[i]) ++i;
        }
        return v;
    }
};
