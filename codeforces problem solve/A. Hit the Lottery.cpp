#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    int ans= a/100;
    int right=a%100;

    ans+= right/20;
    right=right%20;

    ans+= right/10;
    right=right%10;

    ans+= right/5;
    right=right%5;

    ans+= right/1;

    cout<<ans;



}
