//day 34 out of 100
class Solution {
public:
    int finalValueAfterOperations(string[] operations) {
        int x=0;
        for(int i=0;i<operations.size();++i){
            if(operations[i].charAt(1)=='+'){
                ++x;
            }
            else(){
                --x;
            }
        }
        
        return x;
    }
};