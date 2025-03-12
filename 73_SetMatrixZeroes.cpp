class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> lO0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    lO0.push_back({i,j});
                }
            }
        }
        for(vector<int> loc:lO0){
            int row=loc[0];
            int col=loc[1];
            for(int iter=0;iter<matrix[0].size();iter++){
                matrix[row][iter]=0;
            }
            for(int iter=0;iter<matrix.size();iter++){
                matrix[iter][col]=0;
            }
        }
    }
};
