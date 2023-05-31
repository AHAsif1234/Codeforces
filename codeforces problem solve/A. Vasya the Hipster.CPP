#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b) cout<<b<< " ";
    else
        cout<<a<< " ";

    int sub= abs(a-b);
    cout<< sub/2;
}
