#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {5,25,63,28,55};
    int i,j;
    int count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[j+1]>arr[j])
                swap(arr[j+1],arr[j]);
        }
    }
    for(int k=0;k<5;k++)
    {
    cout<<arr[k]<<" ";
    }
    
}
