class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        float mergarr[2000] = {};
        int i = 0, j = 0;
        int t = m+n;
        float median;

        for(i; i<m; i++){
            mergarr[i] = nums1[i];
        }
        for(i; j<n; i++){
            mergarr[i] = nums2[j];
            j++;
        }

        for(i = 0; i<t; i++){
        for(j = i+1; j<t; j++){
            if(mergarr[i]>mergarr[j]){
                int temp = mergarr[i];
                mergarr[i] = mergarr[j];
                mergarr[j] = temp;
            }
        }
    }

        if(t % 2 == 0){
        median = (mergarr[t/2] + mergarr[(t/2)-1])/2;
        }
        else if(t % 2 != 0){
        median = mergarr[t/2];
        }
        return median;
    }
};