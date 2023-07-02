class Solution {
public:
    bool matching(char s,char t){
        if(s=='(' && t==')' || s=='{' && t=='}' || s=='[' && t==']') 
        return true;
        else return false;
    }
    bool isValid(string s) {
        stack<int> k;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            k.push(s[i]);
            else{
                 if(k.empty()==true) return false;
                else if(matching(k.top(),s[i])==true)
                k.pop();
               
                else
                return false;
                }
        }
        if(!k.empty())
        return false;
        else return true;
    }
};
