class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int max=nums[0];
        for (int i:nums){
            if(i==max){
                count++;
            }
            else{
                count--;
                    if(count==0){
                        max=i;
                        count++;
                    }
            }
        }
        return max;
    }
};
