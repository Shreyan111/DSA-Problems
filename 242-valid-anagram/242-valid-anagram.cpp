class Solution {
public:
    bool isAnagram(string a, string b)
    {
        int l1 = a.length();
        int l2 = b.length();
  
        unordered_map<char, int> m;
        if (l1 != l2) {
            return false;
        }
    
        for (int i = 0; i < l1; i++) {
            m[a[i]]++;
        }
  
        for (int i = 0; i < l2; i++) {
            if (m.find(b[i]) == m.end()) {
                return false;
            }
            else {
                m[b[i]]--;
                if (m[b[i]] == 0) {
                    m.erase(b[i]);
                }
            }
        }
    return m.size() == 0;
    }
};
