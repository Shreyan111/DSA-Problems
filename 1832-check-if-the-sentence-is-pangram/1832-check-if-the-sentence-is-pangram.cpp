class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<int> sets;
        for(char ch : sentence){
            sets.insert(ch);
        }
        if(sets.size() == 26){
            return true;
        }
        return false;
    }
};