class Solution {
public:
    double myPow(double x, long n) {
        
        // if(n==0) return 1;
        // if(n>=0){
        //     res=x*myPow(x,n-1);
        // }
        // else{
        //     n=-1*n;
        //     res=1/(x*myPow(x,n-1));
        // }
        // return res;  //stack overflow 
        if(n==0) return 1;
        if(n<0) return myPow(1/x,-n);
        if(n%2==0) {
            return myPow(x*x,n/2);
        }
        else{

            return x*myPow(x*x,n/2);
        }
    }
};
