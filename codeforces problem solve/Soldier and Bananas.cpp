#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;

    for(int i=1;i<=w;i++)
    {
        sum+=i;
    }
    int a=(sum*k)-n;

    if(a<0)
        cout<< "0";
    else
        cout<< a;
}
