class Solution {
public:
    int mirrorReflection(int p, int q) {
        while(!(p % 2) && !(q % 2))   // if both of them even then make odd by dividing by 2
        {
            p = p / 2;
            q = q / 2;
        }
        
        if(p % 2 && q % 2){
            return 1;   // p is odd && q is odd return 1
        }
        if(!(p % 2) && q % 2){
            return 2;  //  p is even && q is odd return 2
        }
        if(p % 2 && !(q % 2)){
            return 0; //   p is odd && q is even return 0
        }
        
        return -1;
    }
};