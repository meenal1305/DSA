class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
          int mini=INT_MAX;
        int currentprofit=0;
        int permanentprofit=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<mini)
            {
                mini=arr[i];
            }
            currentprofit=arr[i]-mini;
            if(currentprofit>permanentprofit)
            {
                permanentprofit=currentprofit;
            }
        }
        return permanentprofit;
    }
};
