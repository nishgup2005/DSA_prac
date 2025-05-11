// sieve of eratosthenes
class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        vector<int> prime (n+1,1);
        for( int i = 2 ; i * i <= n ; i++){
            if (prime[i]==1){
                for (int j = i* i; j <= n ; j+=i){
                    prime[j]=0;
                }
            }
        }
    for(int i = 2 ; i < prime.size()-1; i++){
        if (prime[i]==1){
            cnt++;
        }
    }
    return cnt;
    }
};
