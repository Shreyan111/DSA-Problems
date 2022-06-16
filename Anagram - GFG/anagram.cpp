// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
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

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends