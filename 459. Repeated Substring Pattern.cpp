
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=n/2;i>=1;i--){
            if(n%i==0){
                string sub=s.substr(0,i);
                string res;
                for(int j=1;j<=n/i;j++)
                   res.append(sub);
                if(s.compare(res)==0) return true;
            }
        }
        return false;
    }
    
};


//Points:  string s="abcde". 
//      s.substr(1,2) =>"bc" // substr(starting idx,total len)
//      s.substr(1)  =>"bcde"  

//.     string s="abc". string t="abc".   
//       int x= s.compare(t) => x=0 if s!=t then x!=0
