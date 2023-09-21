
class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        unordered_set<int> us;
        long long sum=0;
        
        for(int val=1;us.size()<n;val++){
            if((us.find(target-val) == us.end())){
                us.insert(val);
                sum+=val;
            }
        }
        
        return sum;
    }
};
