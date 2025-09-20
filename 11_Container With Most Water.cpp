class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0 ;
        int e = height.size() -1;
        int max = min(height[s],height[e])* (e-s);
        while (s<e){
            int cont = min(height[s],height[e])* (e-s);
            if (cont > max ){
                max = cont;
            }
            height[s] > height[e] ? e-- :s++ ;
        }
        return max;
    }
};
