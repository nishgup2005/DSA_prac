class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int nv = 0;
        int it = 0;
        while (it < nums.size()){
            if (nums[it]!=val){
                swap(nums[nv++],nums[it]);
            }
            it++;
        }
        return nv;
    }
};
