class Solution {
public:
    bool isPalindrome(string s) {
        string n = "";
        for (auto ch : s){
            if (isalnum(ch)){
                n+=tolower(ch);
            }
        }

        cout<<n<<endl;
        int st = 0;
        int en = n.size()-1;
        while (st<en){
            if (n[st] != n[en]){
                return false;
            }
            st++;
            en--;
        }
        return true;
    }
};
