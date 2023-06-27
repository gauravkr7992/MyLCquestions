class Solution {
public:
    int reverse(int x) {
        int rem;
        long long rev=0;
        while(x!=0){
            rem=x%10;
            x=x/10;
            long long v=rev*10;
            if(v>pow(2,31)-1 || v<-1*pow(2,31))
            return 0;
            rev=rev*10+rem;
        }
        return rev;
    }
};
