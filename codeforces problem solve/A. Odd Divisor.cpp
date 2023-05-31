#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long t;
        cin>>t;
        long long temp=t&(t-1);
        if(temp==0)
        {
            cout<< "NO"<<endl;

        }
        else
        {
            cout<< "YES"<<endl;
        }
    }

}
