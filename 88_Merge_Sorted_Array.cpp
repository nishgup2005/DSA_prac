class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1 ;
        int j = 0 ;
        if (n==0){
            return;
        }
        else if(m!=0 and n!=0){
            while((i>=0 and j<n) and nums1[i]>nums2[j]){
                swap(nums1[i],nums2[j]) ;
                i--;
                j++;
            }
            sort(nums1.begin(),nums1.begin()+m);
            sort(nums2.begin(),nums2.end());
        }

        for (int i = 0 ; i < n; i++){
            nums1[m+i] = nums2[i];
        }
    }
};
