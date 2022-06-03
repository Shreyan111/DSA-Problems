class Solution {
public:
    int integerReplacement(int n) {
        
        int count = 0;
        long long num = n;
        
        while(num > 1){
            if (num % 2 == 0){
                num = num/2;
                count++;
            }
        
            else if (num == 3 || num % 4 == 1){
                num = num - 1;
                count++;
            }
            
            else{
                num = num + 1;
                count++;
            }
        }
        
        return count;
    }
};