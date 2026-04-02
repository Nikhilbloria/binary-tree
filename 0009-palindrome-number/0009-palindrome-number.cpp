class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long n = 0;
        long long b = x;
        while(x>0){
            n = n*10+x%10;
            x/=10;
        }
    return n==b;
    }
};