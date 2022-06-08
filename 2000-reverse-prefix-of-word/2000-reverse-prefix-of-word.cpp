class Solution {
public:
    string reversePrefix(string word, char ch) {
        int char_index = -1;
        char temp;
        
        for(int i = 0; i < word.length(); i++) {
            if(word[i] == ch) {
                char_index = i;
                break;
            }
        }
        
        if(char_index == -1){
            return word;
        }
        
        else{
            for(int i = 0; i <= char_index / 2; i++) {
                temp = word[i];
                word[i] = word[char_index - i];
                word[char_index - i] = temp;
            }
        }
        return word;
    }
};