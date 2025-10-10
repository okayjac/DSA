class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
      int n=energy.size();
        vector<int>ans(n);
        int maxval=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(i+k<n)
            {
                ans[i]=energy[i]+ans[i+k];
            }
            else
            {
                ans[i]=energy[i];
                
            }
             maxval = max(maxval, ans[i]);
        }
        return maxval;
    }
};