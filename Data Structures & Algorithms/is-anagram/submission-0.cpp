class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int>intS(30, 0);
        vector<int>intT(30, 0);
        for (int i = 0; i < s.size();i++) {
            intS[s[i] - 'a']++;
        }
        for (int i = 0; i < t.size();i++) {
            intT[t[i] - 'a']++;
        }
        for (int i = 0; i < 29;i++) {
            if (intS[i] != intT[i]) return false;
        }
        return true;
    }
};
