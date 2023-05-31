#include<iostream>
using namespace std;
int main()
{
    long long int a,w;
    cin>>a;

    if(a%2==0)
    {
        cout<<a/2;
    }
    else
    {
        w=-(a/2 + 1);
        cout<<w;
    }

}
