class Solution {
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
        int n = transactions.size();
        vector<bool>invalid(n,false);
        vector<string>name(n),city(n);
        vector<int>time(n),amount(n);
        for (int i = 0; i < n; i++) {
        stringstream ss(transactions[i]);
        string temp;

        getline(ss, name[i], ',');
        if (getline(ss, temp, ',')) 
            time[i] = stoi(temp);
            else 
            continue;
        if (getline(ss, temp, ',')) 
            amount[i] = stoi(temp);
            else 
            continue;
        getline(ss, city[i], ',');
        }
        for(int i=0;i<n;i++){
            if(amount[i]>1000){
                invalid[i]= true;
            }
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(name[i]==name[j]&&
                   city[i]!=city[j]&&
                   abs(time[i]-time[j])<=60){
                    invalid[i] = true;
                    invalid[j] = true;
                  } 
            }
        }
            vector<string>result;
            for(int i=0;i<n;i++){
                if(invalid[i]){
                    result.push_back(transactions[i]);
                }
            }
        return result;
    }
};