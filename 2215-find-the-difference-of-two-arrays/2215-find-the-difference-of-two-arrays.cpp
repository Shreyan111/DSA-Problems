class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a1;
        vector<int> a2;
        vector<vector<int>> ans;
        
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        
        for(auto x: s1){
            if(s2.find(x) == s2.end()){
                a1.push_back(x);
            }
        }
        for(auto x:s2){
            if(s1.find(x)==s1.end()){
                a2.push_back(x);
            }
        }
        
        ans.push_back(a1);
        ans.push_back(a2);
        
        return ans;
    }
};