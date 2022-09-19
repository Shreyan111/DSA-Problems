class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string p = countAndSay(n - 1);
        int l = p.size();
        int cnt = 1;
        string ans = "";
        for(int i = 1; i < l; i++){
            if(p[i] == p[i-1])
               cnt++;
            else{
                ans += cnt + '0';
                ans += p[i - 1];
                cnt = 1;
            } 
        }
       ans += cnt + '0';
       ans += p[l - 1];
       return ans;
    }
};