
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> result;
       vector<int>v;
        solve(0,candidates,target,v,result);
        return result;
    }


void solve(int j,vector<int>& candidates, int target,vector<int>& v,vector<vector<int>>&result){
     if(target==0) {
         result.push_back(v);
         v.pop_back();
         return;
     }
     if(target<0){
         v.pop_back();
         return;
     }

     for(int i=j;i<candidates.size();i++){
             
             v.push_back(candidates[i]);
            solve(i,candidates, target-candidates[i],v,result);
         
        }
        j++;
      v.pop_back();
      return;
        
}



};
