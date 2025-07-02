class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> seq;
        set<int> start_seq;

        for (int i = 0; i<nums.size() ; i++){
            seq.insert(nums[i]);
        }

        for(auto i:seq){
            if (seq.find(i-1)==seq.end()){
                start_seq.insert(i);
            }
        }
        auto last = seq.end();
        int longest = 0; 
        for (auto i: start_seq){
            int cnt = 1; 
            int curr = i; 
            while(true){
                if(seq.find(curr+1)!=seq.end()){
                    cnt++;
                    curr++;
                }
                else{
                    longest = max(longest,cnt);
                    break;
                }
            }
        }
        return longest;
    }
};
