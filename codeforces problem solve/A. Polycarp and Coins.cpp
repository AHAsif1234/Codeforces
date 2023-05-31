#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n/3;
        int z=n%3;

        int ans1=x;
        int ans2=x;
        if(z==1)
        {
            ans1++;
        }
        else if(z==2)
        {
            ans2++;
        }
        cout<<ans1<< " "<<ans2<<endl;

    }
}
