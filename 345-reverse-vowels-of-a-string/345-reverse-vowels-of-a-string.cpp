class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
        stack<char> stack;
    
        for(char c:s) // e o
        {
            if(vowels.count(c)){
                stack.push(c);
            }
        }
        
        //This does NOT create a copy of each element in s but instead directly references and stores it in c as an alias. This means that modifying c does modify s.
        
        for(char& c:s) //h o l l e, o and then e is popped
        {
            if(vowels.count(c)) 
            {
                c = stack.top();
                stack.pop();
            }
        }
    return s;
    }
};