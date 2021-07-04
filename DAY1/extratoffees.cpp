class Solution{
public:
    vector<bool>ExtraToffees(vector<int>&toffees,int extraCandies){
        vector<bool> res;
        int max=*max_element(toffees.begin(),toffees.end());
        for(int i=0;i<toffees.size;i++){
            if(toffees[i]+extraCandies>=max){
                res.push_back(true);
            }
            else{
                res.push_back(false)
            }
        }
        return res;
    }

};
