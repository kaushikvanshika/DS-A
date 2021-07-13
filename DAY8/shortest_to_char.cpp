class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> result;
        vector<int> occurences;
        string temp=s;
        while(s.find(c)!=string::npos) {
            int i=s.find(c);
            occurences.push_back(i);
            s[i]='-1';
        }
        int j=0;
        for(int i=0;i<s.size();i++) {
            if(i>occurences[j]) {
                if(j+1 < occurences.size() && abs(occurences[j]-i) > abs(occurences[j+1]-i)) {
                    j++;
                }
            }
            result.push_back(abs(occurences[j]-i));
        }
        return result;

    }
};
