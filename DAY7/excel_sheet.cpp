class Solution {
public:
    string convertToTitle(int n) {

        string res;
        while(n){
            int rem = n%26;
            if(rem == 0){
                res.push_back('Z');
                n = n/26 - 1;
            }
            else{
                res.push_back('A' + rem - 1);
                n = n/26;
            }

        }
        reverse(res.begin(), res.end());
        return res;

    }
};
