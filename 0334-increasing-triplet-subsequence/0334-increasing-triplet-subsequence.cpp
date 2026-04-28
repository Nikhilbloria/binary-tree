class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int one = INT_MAX;
        int sec = INT_MAX;
        for(int num:nums){
            if(num<=one){
                one = num;
            }else if(num<=sec){
                sec = num;
            }else{
                return true ;//if both satisfies like 6>one and 6>sec;
            }
        }return false;
    }
};