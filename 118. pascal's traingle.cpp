// combination function

int nCr(int i, int j){
    int result=1;
    int iter=0;

    while(iter<j){
        result=result*(i-iter);
        result=result/(iter+1);
        iter++;
    }
    return result;
}

// solution class

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> solArr;
        vector<int> tempSolArr;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                tempSolArr.push_back(nCr(i,j));
            }
            solArr.push_back(tempSolArr);
            tempSolArr.clear();
        }
    return solArr;
    }
};
