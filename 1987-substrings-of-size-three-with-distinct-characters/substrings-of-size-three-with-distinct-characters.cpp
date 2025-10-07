class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        int  i = 0, j = 1, k = 0, count = 0;

        while(i<n-2 && j<n-1){
            if(s[i] != s[j] && s[j] != s[j+1] && s[i] != s[j+1]) 
            count++;
            j++;
            i++;
        }

        return count; 
    }
};