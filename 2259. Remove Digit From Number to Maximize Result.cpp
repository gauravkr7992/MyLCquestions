class Solution {
public:
    // string max1(string a,string b){
    // for(int i = 0; i < a.length(); i++){
    // if ((a[i]-'0') < (b[i]-'0')){
    //     return b;
    //     break;
    //     }
    // else if((a[i]-'0') > (b[i]-'0')) {
    //     return a;
    //     break;
    // }
    // }
    //     return a;
    // }
    // inbuilt max(str a,str b) is in C++
    
    string removeDigit(string number, char digit) {
        
        string res="0";
        string rem;

        for(int i=0;i<number.size();i++){
            rem=number;
            if(number[i]==digit){
                
                rem.erase(i,1);
                
                res=max(res,rem);
              
            }
        }
        
        return res;
    }
};
