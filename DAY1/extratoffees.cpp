class Solution{
public:
    vector<bool>ExtraToffees(vector<int>&kids,int extraCandies){
        vector<bool> res;
        int max=*max_element(kids.begin(),kids.end());
        for(int i=0;i<kids.size;i++){
            if(kids[i]+extraCandies>=max){
                res.push_back(true);
            }
            else{
                res.push_back(false)
            }
        }
        return res;
    }

};
