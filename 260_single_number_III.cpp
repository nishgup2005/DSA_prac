class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    int x=0;
    for(auto i:nums){
        x=x^i;
    }   
    int pos=0;
    int mask=1;
    while((x&mask)==0){
        pos++;
        mask=mask<<1;
    }
    mask = 1<<pos;
    int xor1=0,xor2=0;
    for(auto i:nums){
        if((i&mask)!=0){
            xor1=xor1^i;
        }
        else{
            if((i&mask)==0){
                xor2=xor2^i;
            }
        }
    }
    return {xor1,xor2};
    }
};
