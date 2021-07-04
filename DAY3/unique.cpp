class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       vector<string>s= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>s1;
        for(int i=0;i<words.size();i++)
        {
            string s2=" ";
            for(int j=0;j<words[i].length();j++)
            {
                s2=s2+s[words[i][j]-'a'];
            }
            s1.insert(s2);
        }
        return s1.size();
    }
};
