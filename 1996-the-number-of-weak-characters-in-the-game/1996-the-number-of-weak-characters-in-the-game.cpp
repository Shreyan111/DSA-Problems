class Solution {
public:
    static bool comp(vector<int>& v1, vector<int>& v2){
        //sort according to the ascending order of the attacks but if attacks are same then sort according to the descending order of the defense so that we can avoid counting pairs having equal attacks
        return v1[0] == v2[0] ? v1[1] > v2[1] : v1[0] < v2[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), comp);
        
        int n = properties.size();
        
        int maxi = INT_MIN;
		int ans = 0;

		for(int i = n - 1; i >= 0; i--){
			if(properties[i][1] < maxi){
				ans++;
			}

			maxi = max(maxi, properties[i][1]);
		}

		return ans;
	}
};