class Solution{
 public:
     int numIdenticalPairs(vector<int>&nums)
     {
         int cout=0;
         map <int,int>mp;
         for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])){
                count+=mp[nums[i]];
                mp[nums[i]]++;
            }
            else{
                mp[nums[i]]=1;
            }
         }
         return count;
     }
};
