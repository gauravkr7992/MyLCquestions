//use HashMap in java or unordered list in C++ (two for loops gives TLE)
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int minSize=INT_MAX;
        unordered_map<int,int> map1;
        for(int i=0;i<cards.size();i++){
            if(map1.count(cards[i])>0){
                int size=i-map1.at(cards[i])+1;
                minSize=min(minSize,size);
            }
            map1[cards[i]]=i;
        }
        
       if(minSize==INT_MAX) return -1;
        else return minSize;
    }
};
