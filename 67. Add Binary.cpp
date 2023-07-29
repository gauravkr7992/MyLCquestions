
class Solution {
public:
    string addBinary(string a, string b) {
        int s1=a.size();
        int s2=b.size();
        if(s1<s2){
            for(int i=0;i<s2-s1;i++){
                a.insert(0,"0");
            }
        }
        else if(s1>s2){
            for(int i=0;i<s1-s2;i++){
                b.insert(0,"0");
            }
        }
         int n=a.size();
        string res="";
        int carry=0;
        for(int i=n-1;i>=0;i--){
            
            int x=a[i]^b[i];
            if(carry==1) x=x^1;
            res.insert(0,to_string(x));
            if((a[i]=='1'&&b[i]=='1')||((a[i]=='1'||b[i]=='1')&&    carry==1)) carry=1;
            else carry=0;
        }
        if(carry==1) res.insert(0,"1");
        return res;
    }
};
