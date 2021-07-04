class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
            a|=nums[i];
        }
        a=a*pow(2,nums.size()-1);
     return a;
    }
};
