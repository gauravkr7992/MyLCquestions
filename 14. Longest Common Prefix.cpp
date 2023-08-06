
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int siz=INT_MAX;
        string prefix="";
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            int l=s.size();
            siz=min(siz,l);
        }
        int count=1;
        for(int i=0;i<siz;i++){
            
            char f='\0';
            for(int j=0;j<strs.size();j++){
                if(f=='\0'){
                string s=strs[j];
                 f=s[i];
                }
                else{
                    string s=strs[j];
                    if(s[i]!=f) {
                        count=0;
                        break;

                }
            }
            }
            if(count==0) break;
            prefix.push_back(f);
        }
        return prefix;
    }
};

// --------------------Points--------------------
//vector of string is a 2-D array i.e we can use strs[0][3]=w (ex-1)
// we can use min function as shown 
            // string s=strs[i];
            // int l=s.size();
            // siz=min(siz,l);
// we can't use siz=min(siz,strs[i].size()) or siz=min(siz,s.size())
