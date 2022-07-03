class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2){
        int m = nums1.size();
        int n = nums2.size();

        int k = 0;

        nums1.resize(m + n);
        int newSize = nums1.size();

        while (k != nums2.size())
        {
            nums1[m + k] = nums2[k];
            k++;
        }

        sort(nums1.begin(), nums1.end());

        if (newSize % 2 != 0)
        {
            double p = nums1[((newSize) / 2)];
            return p;
        }
        double q = (nums1[((newSize) / 2) - 1] + nums1[(newSize) / 2]);
        return q / 2.0;
    }
};