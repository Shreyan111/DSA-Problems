class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.length();
        stack<char> stacks;
        string ans = "";
        unordered_map<char, int> maps;  // for storing frequency of char
        unordered_map<char, bool> exists;  // for checking if char is present in output
        for(int i = 0; i < n; i++){
            exists[s[i]] = false;
            if(maps.count(s[i]) > 0){
                maps[s[i]]++;
            }
            else{
                maps[s[i]] = 1;
            }
        }
        
        for(int i = 0; i < n; i++){
            maps[s[i]]--; 
            if(exists[s[i]] == true){  // if char is already present in output continue
                continue;
            }
            while(!stacks.empty() && stacks.top() > s[i] && maps[stacks.top()] > 0){  
                // loop for checking whether the string is in lexicographical order
                    exists[stacks.top()] = false;
                    stacks.pop(); 
            }
            stacks.push(s[i]);
            exists[s[i]] = true;
        }
        
        while(!stacks.empty()){
            ans = stacks.top() + ans;
            // reverse(ans.begin(), ans.end());
            stacks.pop();
        }
        return ans;
    }
};