#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cin>>a;
    while(a!=0)
    {
        if(a % 2==1)
        {
            sum++;
        }
        a=a/2;
    }
    cout<<sum<<endl;
}
