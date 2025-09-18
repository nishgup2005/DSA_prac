class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        int i = 0;
        while (i < n-1){
            int target = 0 - nums[i];
            if (i!= 0 and nums[i] == nums[i-1]){
                i++;
                continue;
            }
            int j = i+1;
            int k = n-1;
            while (j<k){
                int sum = nums[j]+nums[k];
                if (sum == target){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while (j<k and nums[j] == nums[j-1]) j++;
                    while (j<k and nums[k] == nums[k+1]) k--;
                }
                if (sum < target){
                    j++;
                }
                if (sum > target){
                    k--;
                }
            }
            i++;
        }
        return ans;
    }
};
