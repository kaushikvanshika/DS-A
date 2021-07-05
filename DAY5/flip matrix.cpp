
#include <bits/stdc++.h>
using namespace std;

int main()
{​​​
int n;
cin>>n;
vector<vector<int>> arr(n,vector<int> (n));
for(int i=0;i<n;i++){​​​
for(int j=0;j<m;j++){​​​
cin>>arr[i][j];
}​​​
}​​​
for(int i=0;i<n;i++){​​​
reverse(arr[i].begin(),arr[i].end());
}​​​
for(int i=0;i<n;i++){​​​
for(int j=0;j<n;j++){​​​
arr[i][j]=1-arr[i][j];
}​​​
}​​​
 return 0;
}​​​
