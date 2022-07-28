class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char, int> map;
        int start = 0;
        int end = 0;
        int s_size = s.size();
        int p_size = p.size();
        
        for(auto& i : p){
            map[i]++;
        }

        while(end < s_size) {
	        if(map[s[end]]){
		        map[s[end]]--;
                end++;
	        }
            else if(start == end){
		        start++;
		        end++;
	        }
            else {
		        map[s[start]]++;
                start++;
	        }
            
            if(end - start == p_size){
                ans.push_back(start);
            }
        }
        return ans;
    }
};