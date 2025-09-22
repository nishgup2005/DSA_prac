class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int it= 0;
        int nz = 0;
        while (it < nums.size()){
            if (nums [it]!= 0){
                swap(nums[nz++],nums[it]);
            }
            it++;
        }
    }
};
