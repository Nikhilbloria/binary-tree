class Solution {
public:
//     int maxDistance(vector<int>& colors) {
//         int n = colors.size();
//         int ans = 0;
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(colors[i]!=colors[j]){
//                     ans=max(ans,abs(i-j));
//                 }
//             }
//         }
//         return ans;
//     }
// };

int maxDistance(vector<int>& colors) {
    int n = colors.size();
    int ans = 0;

    // Compare with first element
    for(int i = n - 1; i >= 0; i--) {
        if(colors[i] != colors[0]) {
            ans = max(ans, i - 0);
            break;
        }
    }

    // Compare with last element
    for(int i = 0; i < n; i++) {
        if(colors[i] != colors[n - 1]) {
            ans = max(ans, (n - 1) - i);
            break;
        }
    }

    return ans;
}
};