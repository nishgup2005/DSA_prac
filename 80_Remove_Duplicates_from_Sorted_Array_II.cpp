class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0 or nums.size()==1){
            return nums.size();
        }
        int it = 0;
        int un = 0;
        if (nums[it] == nums[it+1]){
            un = 1;
            it = 2;
        }
        while (it<nums.size()){
            if (nums[it]!=nums[un]){
                if ((it+1) <nums.size() and nums[it] == nums[it+1]){
                    swap(nums[it++],nums[++un]);
                    swap(nums[it],nums[++un]);
                }
                else{
                    swap(nums[it],nums[++un]);
                }
            }
            it++;
        }

        return un+1;
    } 
};
