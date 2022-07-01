class Solution {
public:
    bool isPalindrome(string s){
        int i=0;
        int j= s.length()-1;
        while(i < j){
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    void solve(string &s, int index, vector<string> arr, vector<vector<string>> &ans ){
        if(index == s.size()){
            ans.push_back(arr);
            return;
        }
        for(int i = index; i < s.length(); i++){
            string temp = s.substr(index,i-index+1);
            if(isPalindrome(temp)){
                arr.push_back(temp);
                solve(s, i+1, arr, ans);
                arr.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        solve(s, 0 , {}, ans);
        return ans;
    }
};