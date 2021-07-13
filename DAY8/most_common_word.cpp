class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_set<string>set(begin(banned), end(banned));
        for (int i = 0; i < paragraph.length(); i++)
            paragraph[i] = isalpha(paragraph[i]) ? tolower(paragraph[i]) : ' ';
        stringstream s(paragraph);
        string str;
        unordered_map<string, int>result;
        while (s >> str)
            if(!set.count(str))
                result[str]++;
        int freq = INT_MIN;
        for (auto c : result)
            if (c.second > freq)
                freq = c.second, str = c.first;
        return str;


    }
};
