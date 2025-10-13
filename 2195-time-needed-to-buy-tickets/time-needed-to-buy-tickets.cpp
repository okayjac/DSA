class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
      int time=0;
      int i=0;
      int n=tickets.size();
      while(tickets[k]!=0)
      {
        i=i%n;
        if(tickets[i]!=0)
        {
            tickets[i]--;
            time++;
        }
        i++;
      } 
      return time; 
    }
};