class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int check = 0;
        string check1 = s1, check2 = s2;
        sort(check1.begin() , check1.end());
        sort(check2.begin() , check2.end());
        
        if(s1 == s2){
            return true;
        }
        
        else if(check1 != check2){
            return false;
        }
        
        for(int i = 0; i < s1.length(); i++){
            if(s1[i] != s2[i]){
                check++;
            }
            if(check > 2){
                return false;
            }
        }
        return true;
    }
};