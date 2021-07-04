class Solution{
 public:
     int numIdenticalPairs(vector<int>&arr)
     {
         int count=0;
         map <int,int>mp;
         for(int i=0;i<arr.size();i++){
            if(mp.count(arr[i])){
                count+=mp[arr[i]];
                mp[arr[i]]++;
            }
            else{
                mp[arr[i]]=1;
            }
         }
        return res;
     }
}
