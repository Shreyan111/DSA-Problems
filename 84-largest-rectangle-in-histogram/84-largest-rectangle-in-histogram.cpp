class Solution {
public:
    long long int largestRectangleArea(vector<int>& arr) {
        vector<long long int>left;
        stack<long long int>s;
        
		// finding smallest element index towards left (left boundary) == next greater element
        for(long long int i = 0; i < arr.size(); i++)
        {
            while(s.size() != 0 && arr[s.top()] >= arr[i])
            {
                s.pop();
            }
            
            if(s.size() == 0)
            {
                left.push_back(0);
                s.push(i);
            }
            
            else
            {
                left.push_back(s.top() + 1);
                s.push(i);
            }
                
        }
        
         stack<long long int>ss;
         vector<long long int>right;
        
		 // finding smallest element index towards right (right boundary) == previous greater element
        for(long long int i = arr.size() - 1; i >= 0; i--)
        {
            while(ss.size() != 0 && arr[ss.top()] >= arr[i])
            {
                ss.pop();
            }
            
            if(ss.size() == 0)
            {
                right.push_back(arr.size() - 1);
                ss.push(i);
            }
            else
            {
                right.push_back(ss.top() - 1);
                ss.push(i);
            }
        }
         
        reverse(right.begin(),right.end());
        
		//Calculating area between them
        long long int max_area = INT_MIN;
        for(int  i = 0; i < arr.size(); i++)
        {
            if(arr[i] * (right[i] - left[i] + 1) > max_area)
            {
                max_area = arr[i] * (right[i] - left[i] + 1);
            }
        }
        return max_area;
   }
};