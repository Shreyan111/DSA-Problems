class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if(n == 0){
        //     return false;
        // }
        // else if((n & (n - 1)) == 0){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        
        bool a;
        if(n == 0){
            a=false;
        }
        
        else if(n==1){
            a=true;
        }
        
        else{
            if(ceil(log2(n)) == floor(log2(n))){
                a=true;
            }
            else{
                a=false;
            }
        }
        return a;
    }
};