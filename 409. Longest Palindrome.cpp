class Solution {
public:
    int longestPalindrome(string s) {
        int count[128]={0};
        int length=0;
        int oddvalue=0;
        for(char c:s){
            count[c]++;
        }
        for(int a:count){
            if(a%2==0){
                length+=a;
            }
            else{
                oddvalue=1;
                a--;
                length+=a;
            }
        }
        if(oddvalue==1){
            length=length+1;
        }
        return length;
    }
};
