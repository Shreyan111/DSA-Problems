class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
	    int count = 0;
        int ans = -1;
        unordered_map<int, int> ump;
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            ump[nums[i]]++;
        }
      
        //traverse the map
        for(auto x: ump)
		{
            if(x.first % 2 == 0 && x.second == count) //if the element is even and frequency of that element is same as the other element which is even
			{
                //we need to consider the smaller element
               if(x.first < ans)
			   {
			      count = x.second;
                  ans = x.first;
               }
            }
            
            if(x.first % 2 == 0 && x.second > count) //if the element is even and the frequency of that number is greater than the other element which even 
			{
                count = x.second;
                ans = x.first;
             
            }
            
        }
        return ans;
    }
};