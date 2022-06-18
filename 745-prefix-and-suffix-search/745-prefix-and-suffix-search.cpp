class WordFilter {
public:
    unordered_map<string, int> map;
    WordFilter(vector<string>& words) 
    {
        int n = words.size(); // 1
        for(int i = 0; i < n; i++)
        {
            int len = words[i].size(); // 5
            string p = "" , s = "";
            for(int j = 0; j <= len; j++)
            {
                s = "";
                for(int k = len-1; k >= 0; k--)
                {
                    s = words[i][k] + s;
                    map[p + '#' + s] = i;
                }
                p = p + words[i][j];
            }
        }
    }
    
    
    int f(string prefix, string suffix) 
    {
        if(map.find(prefix + '#' + suffix) == map.end())
        {
            return -1;
        }
        return map[prefix + '#' + suffix];
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */