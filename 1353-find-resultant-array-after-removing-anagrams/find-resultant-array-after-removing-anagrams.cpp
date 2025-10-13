class Solution {
public:
bool isanagram(string s1,string s2)
{
 if (s1.length() != s2.length()) return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

 
    vector<string> removeAnagrams(vector<string>& words) {
         vector<string> ans;
        ans.push_back(words[0]);   

        for (int i = 1; i < words.size(); i++) {
            if (!isanagram(words[i], words[i - 1])) {
                ans.push_back(words[i]);  
            }
        }

        return ans;
    }
};