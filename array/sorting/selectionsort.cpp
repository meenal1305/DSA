#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={5,8,100,25,22};
   int i;
   // int mini=arr[i];
    for(int i=0;i<5;i++)
    {
        int mini=i;
    for(int j=i+1;j<5;j++)
    {
        if(arr[j]<arr[mini])
            mini=j;
    }
        swap(arr[i],arr[mini]);
    }
for(int k=0;k<5;k++)
{
    cout<<arr[k]<<" ";
}
}
