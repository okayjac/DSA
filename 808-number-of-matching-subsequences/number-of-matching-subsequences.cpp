// class Solution {
// public:
//  bool isSubsequence(string s, string t) {
//         int i = 0, j = 0;
//         while (i < s.length() && j < t.length()) {
//             if (s[i] == t[j]) {
//                 i++;
//             }
//             j++;
//         }
//         return i == s.length();
//     }
//     int numMatchingSubseq(string s, vector<string>& words) {
//     int count = 0;
//         for (string &word : words) {
//             if (isSubsequence(word, s)) {
//                 count++;
//             }
//         }
//         return count;
//     }
class Solution {
public:
    unordered_map<char, vector<int>> mp;

    bool isSubsequence(string &s, string &t) {
        int prev = -1;

        for (char c : s) {
            if (mp.find(c) == mp.end()) return false;

            auto &v = mp[c];
            auto it = upper_bound(v.begin(), v.end(), prev);
            if (it == v.end()) return false;

            prev = *it;
        }
        return true;
    }

    int numMatchingSubseq(string s, vector<string>& words) {
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]].push_back(i);
        }

        int count = 0;
        for (string &word : words) {
            if (isSubsequence(word, s)) {
                count++;
            }
        }
        return count;
    }
};
