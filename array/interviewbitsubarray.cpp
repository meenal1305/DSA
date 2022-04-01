int Solution::maxSubArray(const vector<int> &arr)
 {
    int n=arr.size();
    int currentsum= -1e8;
    int maxsum=-1e8;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>currentsum+arr[i])
        {
             currentsum=arr[i];
        }
        else
        {
            currentsum=currentsum+arr[i];
        }
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }
    }
return maxsum;
}

