class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        
        string ans;
        int n = s.length();
        int diff = (numRows - 1) * 2;
        int i = 0;
        
        //for first row
        while(i < n){
            ans = ans + s[i];
            i = i + diff;
        }
        
        
        //for mid rows
        int k = 1;
        int j = 2;
        diff = diff - 2;
        
        while(k < numRows - 1)
        {
            int i = k;
            bool flag = true;
            while(i < n)
            {
                ans = ans + s[i];
                if(flag)
                    i = i + diff;
                else
                    i = i + j;
                flag = !flag;
            }
            diff = diff - 2;
            j = j + 2;
            k++;
        }
        
        //for last row
        i = numRows - 1;
        diff = (numRows - 1) * 2;
        while(i < n){
            ans = ans + s[i];
            i = i + diff;
        }
        return ans;
    }
};