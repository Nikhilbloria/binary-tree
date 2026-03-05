// class Solution {
// public:
//     int minOperations(string s) {
//         int count = 0;
//         for(int i = 0; i < s.size(); i++)
//             if(s[i] != (i % 2 + '0')) count++;
//         return min(count, (int)s.size() - count);
//     }
// };
// class Solution {
// public:
//     int minOperations(string s) {
//         int count = 0, n = s.length();
//         for (int i = 0; i < n; i++)
//             count += (s[i] ^ i) & 1;
          
//         return min(count, n - count);
//     }
// };
class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int count1=0;
        int count2 =0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(s[i]=='0'){
                    count2++;
                }else{
                    count1++;
                }
            }else{
                if(s[i]=='1'){
                    count2++;
                }else{
                    count1++;
                }
            }
        }
        return min(count2,count1);
    }
};