#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j;
    int arr[5]={5,100,25,60,2};
    for(int i=0;i<5;i++)
    {
        for(int j=4;j>0;j--)
        {
            if(arr[j]<arr[j-1])
        swap(arr[j],arr[j-1]);
    }
    }
    for(int k=0;k<5;k++)
    {
        cout<<arr[k]<<" ";
    }
}
