class Solution {
public:
    double myPowHelper(double x, long long n){
        if (n==0 && x!=0){
            return 1;
        }
        if (x==0){
            return x;
        }
        double ans;
        if (n<0){
            n*=-1;
            ans=myPowHelper(x,n);
            return 1/ans;
        }
        if ((n&1)==0){
            ans=myPowHelper(x,n/2);
            return ans*ans;
        }
        else{
            ans=myPowHelper(x,n/2);
            return ans*ans*x;
        }
    }
    double myPow(double x, int n) {
        long long nn = n;
        return myPowHelper(x,nn);
    }
};
