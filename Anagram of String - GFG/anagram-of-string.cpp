// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
int l1=str1.length();
int l2=str2.length();

for(int i = 0; i < l1; i++){
    for(int j = 0; j < l2; j++){
        if(str1[i]==str2[j]){
            str1.erase(str1.begin()+i);
            str2.erase(str2.begin()+j);
            i--;
            l1=str1.length();
            l2=str2.length();
        }
    }
}
int count = l1+l2;
return count;

}