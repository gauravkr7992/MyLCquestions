class Solution {
public:
    int romanToInt(string s) {
       unordered_map<string, int> u;
       int res=0;
     u["I"]=1;u["IV"]=4; u["IX"]=9;
     u["V"]=5;
     u["X"]=10; u["XL"]=40;u["XC"]=90;
     u["L"]=50;
     u["C"]=100;u["CD"]=400;u["CM"]=900;
     u["D"]=500;
     u["M"]=1000;
    for(int i=0;i<s.size();i++){
       string a,b;
       a=s[i+1];
       b=s[i];
    if(u.count(b+a)>0){
        res+=u[b+a];
        i++;
    }
    else if(u.count(b)>0){
        res+=u[b];
    }
   
    }
    
    return res; 
    }
};
