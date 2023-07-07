class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

    
        int right=0;
        int bottom=0;
        int left=n-1;
        int top=n-1;
        int counter=1;
        
        vector<vector<int>> v( n , vector<int> (n));  

        while(top>=bottom && left>=right){
            for(int i=right;i<=left;i++){
                v[bottom][i]=counter;
                counter++;
            }
            
            bottom++;
            for(int i=bottom;i<=top;i++){
                v[i][left]=counter;
                counter++;
            }
            
            left--;
            if(top>=bottom){
                for(int i=left;i>=right;i--){
                    v[top][i]=counter;
                    counter++;
                }
                top--;
                
            }
            
            if(left>=right){
                for(int i=top;i>=bottom;i--){
                    v[i][right]=counter;
                    counter++;
                }
                right++;
                
            }
        }
        
        return v;
    }
};
