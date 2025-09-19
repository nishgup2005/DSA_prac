class Solution {
public:
    int trap(vector<int>& height) {
        int sum = 0;
        int i = 0; 
        int j = height.size() -1;
        int max = 0;
        
        for (int it = 0 ; it < height.size()  ; it++){
            if (height[it] > max){
                max = height [it];
            }
        }

        int max_left = height[i];
        int max_right = height[j];
        while (height[i] != max){
            if (height[i] > max_left){
                max_left = height[i];
                i++;
            }
            else{
                sum+=(max_left-height[i]);
                i++;
            }
        }
        while (height [j]!= max){
            if (height[j] > max_right){
                max_right = height[j];
                j--;
            }
            else{
                sum+=(max_right-height[j]);
                j--;
            }
        }
        while(i<j){
            sum+= max-height[i];
            i++;
        }
        return sum;
    }
};
