#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int arr[a];
        int sum=0;
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
    }
}

