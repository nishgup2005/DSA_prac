class Solution {
public:
    bool winnerSquareGame(int n) {
        int col;
        vector<bool> dp (n+1);
        dp[0]= false;
        dp[1]=true;
    // problem if alice has n stones will  she win or not 
    // sub problem if alice chooses a square number x such will she win or not with n - x 
    // if she can win with n- x then she will not be able to win with n 
    // else she can win with n 
    // transition dp [ i ] = false if dp[i-x]== true for any x less than i where x is a square number 
    // else dp [ i ] = true if dp[i- x ] == false for all x less than i where x is a square number
    // base case  dp[1] = true or dp[0] = false
    // since dp[i] is dependant on i - x the loop must flow from 0 to n
        for (int i = 2 ; i <=n ; i ++){
            dp[i]=false;
            for (int x = 1; x<=sqrt(i); x++){
                    if (dp[i-x*x]==false){
                        dp[i]=true;
                        break;
                    }
            }
        }
        return dp[n];
    }
};
