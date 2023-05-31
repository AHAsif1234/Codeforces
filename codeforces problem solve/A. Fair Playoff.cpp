#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ma1=max(a,b);
        int mi1=min(a,b);

        int ma2=max(c,d);
        int mi2=min(c,d);

        if(mi1>ma2 || mi2>ma1)
        {
            cout<< "NO"<<endl;

        }
        else
        {
            cout<< "YES"<<endl;
        }
    }
}
