class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n1 = s.size(), n2 = goal.size();
        
        if(n1 != n2) return false;
        
        if(n1 == 1) return false;
        
        vector<int> ind;
        for(int i = 0; i < n1; i++)
        {
            if(s[i] != goal[i])
            {
                ind.push_back(i);
            }
        }
        
        if(ind.size() == 2)
        {
            swap(s[ind[0]], s[ind[1]]);
            if(s == goal) return true;
        }
        
        else if(ind.size() == 0){
            map<char, int> count;
            for (int i = 0; i < s.length(); i++) {
                count[s[i]]++;
            }

            for (auto it : count) {
                if (it.second > 1){
                    return true;
                }
            }
            return false;
        }
        return false;
    }
};