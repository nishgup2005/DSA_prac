class Solution {
public:
    void sortColors(vector<int>& nums) {
        long long Cnt0=0;
        long long Cnt1=0;
        
        for(long long i=0;i<nums.size();i++){
            if(nums[i]==0){
                Cnt0++;
            }
            else if(nums[i]==1){
                Cnt1++;
            }
        }
        long long i=0;
        for(;i<Cnt0;i++){
            nums[i]=0;
        }
        for(;i<Cnt0+Cnt1;i++){
            nums[i]=1;
        }
        while(i<nums.size()){
            nums[i]=2;
            i++;
        }
    }
};
