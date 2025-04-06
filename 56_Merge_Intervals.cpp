class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int i=0;
        sort(intervals.begin(),intervals.end());
        while (i<intervals.size()-1){
            int start=intervals[i][0];
            int end=intervals[i][1];
            int startnext=intervals[i+1][0];
            int endnext=intervals[i+1][1];
            if(startnext<=end){
                intervals[i][1]=max(end,endnext);
                intervals.erase(intervals.begin()+i+1);
            }
            else{
                i++;
            }
        }
        return intervals;
    }
};
