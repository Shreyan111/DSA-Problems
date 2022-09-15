class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        sort(changed.begin(), changed.end());
        if(n % 2 == 1) return {};
        
        vector<int> ans;
        map<int, int> maps;
        
        for (int i = 0; i < n; i++) {
            maps[changed[i]]++;
        }
        
        for (int i = 0; i < n; i++) {
            if(maps[changed[i]] == 0) continue; //do not take the number if its frequency is 0
            if (maps[changed[i] * 2] == 0) return {};
            ans.push_back(changed[i]);
            maps[changed[i]]--;
            maps[changed[i] * 2]--;\
        }
        return ans;
    }
};