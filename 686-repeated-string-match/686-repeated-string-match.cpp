class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int m=b.size()/a.size();
        if(b.size()%a.size()){
            m++;
        }
        
        string s="";
        for(int i = 0; i < m; i++)
        {
            s = s + a;
        }
        if(s.find(b) < s.size()){
            return m;
        }
        s = s + a;
        if(s.find(b) < s.size()){
            return m+1;
        }
        return -1;
    }
};