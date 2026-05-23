class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        unordered_map<int,int>map;
        int i =0;
        int count =0;
        for(int j=0;j<n;j++){
            map[fruits[j]]++;

            while(map.size()>2){
                map[fruits[i]]--;

                if(map[fruits[i]]==0){
                    map.erase(fruits[i]);
                }
                i++;
            }
            count = max(count,j-i+1);
        }
        return count;
    }
};