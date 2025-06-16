class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> hashMap;
        for (int i=0;i<n;i++){
            int m=target-nums[i];
            if(hashMap.count(m)){
                int index= hashMap[m];
                return {index,i};
            }
            else{
                hashMap.insert({nums[i],i});
            }
        }
        return {};
    }
};
