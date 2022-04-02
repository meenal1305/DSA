#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
    cin>>t;
int diff;
int x1,x2,x3;
int y1,y2,y3;
while(t--)
{
    
    
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    
    if(y2==y1&&y3<y1)
    {
        diff=abs(x2-x1);
        cout<<diff<<endl;

        
    }
   else if(y3==y1&&y2<y3)
    {
        diff=abs(x3-x1);
       cout<<diff<<endl;
    }
    else if(y3==y2&&y1<y3)
    {
        diff=abs(x3-x2);
        cout<<diff<<endl;
    }
    else
    cout<<"0"<<endl;
}
}
