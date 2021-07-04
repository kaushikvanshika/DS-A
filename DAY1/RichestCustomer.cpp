class Solution{
public:
    int maxWealth(vector<vector<int>>&accounts){
        int max=0;
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(j=0;j<accounts[0].size();j++){
                sum+=accounts[i][j];
            }
            if(max<sum){
                max=sum;
            }
        }
        return max;
    }
};
