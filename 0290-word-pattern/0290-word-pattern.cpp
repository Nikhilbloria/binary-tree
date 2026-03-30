class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        stringstream ss(s);
        string token;
        int count = 0;
        while(getline(ss,token,' ')){
            words.push_back(token);
            count++;
        }
        int n = pattern.length();
        if(n!=words.size()){
            return false;
        }
        unordered_map<string,char>mp;
        set<char>used;
        for(int i=0;i<n;i++){
            string word = words[i];
            char ch = pattern[i];
            if(mp.find(word)==mp.end() && used.find(ch)==used.end()){
                used.insert(ch);
                mp[word]=ch;
            }else if(mp[word]!=pattern[i]){
                return false;
            }
        }return true;
    }
};