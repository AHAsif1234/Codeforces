#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        int b=5-arr[i];
        if(b>=k)
        {
            count++;
        }
    }
    int c=count/3;
    cout<<c;
}
