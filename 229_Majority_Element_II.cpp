class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1,el2,cnt1=0,cnt2=0;

        if (nums.size()==1){
            return nums;
        }

        for(int i : nums){
            if (cnt1 == 0 && i != el2){
                el1 = i;
                cnt1++;
            }
            else if (cnt2 == 0 && i != el1){
                el2 = i ; 
                cnt2++;
            }

            else if (i == el1) cnt1++;
            else if (i== el2) cnt2++;
            else {
                cnt1--;
                cnt2--;
            }
        }

    vector <int> ans;
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == el1) cnt1++;
        if (nums[i] == el2) cnt2++;
    }

    int mini = int(nums.size() / 3) + 1;
    if (cnt1 >= mini) ans.push_back(el1);
    if (cnt2 >= mini) ans.push_back(el2);

    return ans;
    }
};
