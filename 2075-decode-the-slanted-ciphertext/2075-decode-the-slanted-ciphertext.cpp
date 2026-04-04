class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int n = encodedText.length();
        int col = n/rows;
        string origText;
        for(int i=0;i<col;i++){
            for(int j=i;j<n;j+=(col+1)){
                origText += encodedText[j];
            }
        }
        while(!origText.empty() && origText.back()==' '){
            origText.pop_back();
        }
        return origText;
    }
};