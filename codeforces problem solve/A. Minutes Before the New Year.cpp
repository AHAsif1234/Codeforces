#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int sum=60*(24-a-1)+(60-b);
        cout<<sum<<endl;
    }
}
