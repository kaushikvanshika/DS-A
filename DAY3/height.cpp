class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int m=*max_element(arr.begin(),arr.end());
        int i=find(arr.begin(),arr.end(),m)-arr.begin();
        return i;
    }
};
