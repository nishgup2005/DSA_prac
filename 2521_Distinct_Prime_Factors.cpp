class Solution {
public:
    //This is the sieve to generate the smallest prime factors of a number 
    // for example spf[i] returns the smallest prime factor of i
    // uses the concept of sieve of eratosthenes
    vector<int> Sieve (int n){
        vector<int> spf (n+1);
        iota(spf.begin(),spf.end(),0);
            for( int i = 2 ; i * i <= n ; i++){
                if(spf[i]==i){
                for (int j = i* i; j <= n ; j+=i){
                    if(i<spf[j]){
                        spf[j]=i;
                    }
                }
            }
        }
        return spf;
        }

    int distinctPrimeFactors(vector<int>& nums) {
      // jo given array hai uske har number pe iterate kara aur factors nikalne hain
        int mn =*max_element(nums.begin(),nums.end());
        vector<int> spf = Sieve(mn+1);
      //har factor ko iss set mei add karte rehna hai end mei set ka size return kar dena hai 
        unordered_set<int> ans;

      // yaha pe aapke paas sieve aa gayi.
      // sieve se aapne initial number ko uske sabse chhote prime factor se divide kar diya aur initial number ko quotient se replace kar diya 
      // aise karke karke tab tak chalna hai jab tak number 1 nahi ho jata. 
        for(int no:nums){
            while (no>1){
                ans.insert(spf[no]);
                no/=spf[no];
            }
        }
        return ans.size();
    }
};
