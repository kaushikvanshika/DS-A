class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         nums.push_back(-1000);
        int n=nums.size();
       int i,j=0,len;
    for(i=0;i<n-1;i++)
    {
        if(nums[i]!=val)
        {
            nums[j++]=nums[i];
        }
    }
    return j;

    }
};
