class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
      vector<int>temp;
      for(int i:nums)
      {
          temp.push_back(((i % value) + value) % value);
      }  
      unordered_map<int,int>mp;
      
    for (int i : temp) 
    {
        mp[i]++; 
    }
    int mex = 0;
    while (true)
    {
        int r = mex % value;
       if (mp[r] > 0)
        mp[r]--;
       else
        break;
       mex++;
    }
    return mex;
    }
};