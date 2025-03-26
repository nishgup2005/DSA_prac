class Solution {
    int factorial(int n){
        int prod=1;
        for(int i=1;i<=n;i++){
            prod=prod*i;
        }
        return prod;
    }
public:
    string getPermutation(int n, int k) {
        vector <int> set1 ;
        k--;
        for(int i= 1;i<=n;i++){
            set1.push_back(i);
        }
        string ans="";
        int fact=factorial(n);
        for(int i=n;i>0;i--){
            fact /=i;
            int index=k/fact;
            ans=ans+to_string(set1[index]);
            set1.erase(set1.begin()+index);
            k=k%fact;
        }
        return ans;
    }
};
