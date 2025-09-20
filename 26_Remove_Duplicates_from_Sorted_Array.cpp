class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int un = 0;
        int it = 0;
        while (it<nums.size()){
            if (nums[un]!=nums[it]){
                swap(nums[++un],nums[it]);
            }
            it++;
        }
        return un+1;
    }
};
