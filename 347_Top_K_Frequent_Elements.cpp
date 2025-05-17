class Solution {
public:
    static bool comparator(pair <int,int> &p1, pair <int,int> &p2){
        if (p1.second== p2.second) return p1.first > p2.first;
        else return p1.second>p2.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> FreqMap;
        for (int i:nums){
            FreqMap[i]++;
        }
        vector<pair<int, int>> Freq(FreqMap.begin(), FreqMap.end());
        sort(Freq.begin(),Freq.end(),comparator);
        vector<int> res;
        for(int i =0;i<k;i++){
            res.push_back(Freq[i].first);
        }
        return res;
    }
};
