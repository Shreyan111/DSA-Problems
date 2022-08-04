class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int, int> mpp;
        int j = 0;
        int ans = 0;
        //iterating through the loop and checking if the size of the type of fruit is greater than 2 or not
        for(int i = 0; i < fruits.size(); i++){
            mpp[fruits[i]]++;//storing the frequency of fruit
            
            //if map is smaller than a size of 2 then keep a count and iterate through the map and calculate the total fruits
            if(mpp.size() <= 2){
                int cnt = 0;
                for(auto it:mpp){
                    cnt += it.second;
                }
                ans = max(ans, cnt);
            }
            
            //if map size is greater than 2 then remove the fruit which have the least frequency so that only 2 types of fruits are left with max frequency
            else{
                while(mpp.size() > 2){
                    if(mpp[fruits[j]] == 1){
                        mpp.erase(fruits[j]);
                    }
                    else{
                        mpp[fruits[j]]--;
                    }
                    j++;
                }
            }
        }
        return ans;
    }
};