class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse_code[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> codes;

        for(auto word : words) {
            string code = "";
            for(auto ch : word)
                code = code + morse_code[ch - 'a'];
            codes.insert(code);
        }
        return codes.size();
    }
};