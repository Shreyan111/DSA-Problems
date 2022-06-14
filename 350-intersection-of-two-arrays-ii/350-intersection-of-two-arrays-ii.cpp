class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            swap(nums1,nums2);
        }
    
        unordered_map<int,int> ans;
        for(auto val:nums1){
            ans[val]++;
        }
        int k=0;
        
        for(auto val:nums2){
            if(ans[val] > 0){
                nums1[k++] = val;
                --ans[val];
            }
        }
    return vector<int>(nums1.begin(),nums1.begin()+k);
    }
};