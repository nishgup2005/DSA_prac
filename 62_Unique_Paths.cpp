class Solution {
public:
    int comb(int t, int n){
        if (t==0){
            return 1;
        }
        double result = 1;
        for (int i=1;i<n+1;i++){
            result = result * (t-n+i)/i;
        }
        return (int) result;
    }
    int uniquePaths(int m, int n) {
    int t=m+n-2;
    int path = comb(t,max(m-1,n-1));
    return path;
    }
};
