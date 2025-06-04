class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int s=0;
        int e=row*col-1;
        int m=s+(e-s)/2;
        int act_row=m/col;
        int act_col=m%col;
        while(s<=e){
            m=s+(e-s)/2;
            act_row=m/col;
            act_col=m%col;
            cout<<s<<" "<<e<<" "<<m<<" "<<act_row<<" "<<act_col<<endl;
            if(matrix[act_row][act_col]>target){
                e=m-1;
            }
            else if(matrix[act_row][act_col]<target){
                s=m+1;
            }
            else{
                return true;

            }
        }
        cout<<"hello there"<<endl;
        return false;
    }
};
