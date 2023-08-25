
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
           while(columnNumber){
               columnNumber--;
               int m=(columnNumber)%26;
               res+=(m+'A');   //res+=(char)(m+'A');
               columnNumber/=26;
           }
           reverse(res.begin(),res.end());
      return res;

    }
};



// to reverse a string =>reverse(string.begin(),string.end())
