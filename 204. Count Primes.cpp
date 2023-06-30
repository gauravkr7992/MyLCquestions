class Solution {
public:
    int countPrimes(int n) {
        // Given below gives TLE
        // int count=0;
        // if(n==0 || n==1) return count;
        
        // for(int i=2;i<n;i++){
        // bool val=false;
        // int factor=0;
        //    for(int j=2;j<=sqrt(i);j++){
        //       if(i%j==0) factor++;
        //        }
        //    if(factor==0) val=true;
        //    if(val) count++;
        //     }
        // return count;

       //Approach: Sieve of Eratosthenes
       vector<int> prime(n,0);
       for(int i=2;i*i<n;i++){
           if(prime[i]==0){
           for(int j=i*i;j<n;j+=i){
               prime[j]=1;
           }
           }
       }
       int count=0;
       for(int i=2;i<n;i++){
           if(prime[i]==0) count++;
       }
       return count;
    }
};
