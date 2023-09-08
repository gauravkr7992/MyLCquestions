
class Solution {
public:

    bool solve(string &s1, string &s2, string &s3,int i,int j,vector<vector<int>>&dp)
    {
        if(i==s1.size() && j==s2.size())    return true;
        if(dp[i][j]!=-1)    return dp[i][j];
        bool x=false;
        if(s1[i]==s3[i+j])
            x=x||solve(s1,s2,s3,i+1,j,dp);
        if(s2[j]==s3[i+j])
            x=x||solve(s1,s2,s3,i,j+1,dp);
        return dp[i][j]=x;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size())  return false;
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        return solve(s1,s2,s3,0,0,dp);
    }
};
    // bool isInterleave_check(string s1,string s2, string s3, int i, int j, int k, vector<vector<int>> &v){
        
    //     if(v[i][j]!=-1){
    //         return v[i][j];
    //     }
        
    //     if(i==s1.length() && j==s2.length() && k==s3.length()){
    //         return true;
    //     }
        
    //     bool x=false,y=false;
    //     if(i!=s1.length()){
            
    //         if(s1[i]==s3[k]){
    //             x=isInterleave_check(s1, s2, s3, i+1, j, k+1, v);
    //         }   
    //     }
    //     if(j!=s2.length()){
            
    //         if(s2[j]==s3[k]){
    //             y=isInterleave_check(s1, s2, s3, i, j+1, k+1, v);
    //         }   
    //     }
        
    //     return v[i][j]=x||y;
    // }
    
    // bool isInterleave(string s1, string s2, string s3) {
    //     int l1=s1.length(),l2=s2.length();
    //     vector<vector<int>> v(l1+1,vector<int>(l2+1,-1));
    //     int i=0,j=0,k=0;
    //     return isInterleave_check(s1, s2, s3, 0, 0, 0, v);
        

   
