class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle==" "){
            return 0;
        }
      
        //syntax for finding a character using find()
        else if(haystack.find(needle) != string::npos){
            return haystack.find(needle);
        }
        
        else{
            return -1;
        }
    }
};