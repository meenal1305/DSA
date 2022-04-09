#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int arr[]={5,100,25,60,2};
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
               swap(arr[j],arr[j-1]);
            }
            else
            {
                break;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}
