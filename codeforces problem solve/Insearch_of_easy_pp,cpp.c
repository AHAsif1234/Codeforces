#include<bits/stdc++.h>
using namespace std;
/*o amay valo base ni*/
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
    return 0;
}
