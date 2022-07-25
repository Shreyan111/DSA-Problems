class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        
        int n = arr.size();
        bool need_swap = false;
        for (int i = n - 1; i > 0; i--){
            if (arr[i - 1] > arr[i]){
                need_swap = true;
                int key_index = i - 1;
                int swap_index = i;
                
                for (int j = i + 1; j < n; j++){
                    if (arr[j - 1] == arr[j]){
                        continue;
                    }
                    if (arr[key_index] > arr[j]){
                        swap_index = j;
                    }
                    else{
                        break;
                    }
                }
                int temp = arr[key_index];
                arr[key_index] = arr[swap_index];
                arr[swap_index] = temp;
            }
            if (need_swap){
                break;
            }
        }
        return arr;
    }
};