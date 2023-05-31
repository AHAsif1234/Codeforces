#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,count=0,m=1;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        if(arr[i]>=arr[i-1])
        {
            count++;
            m=max(m,count);
        }
        else
        {
            count=1;
        }
    }
    cout<<m;
}
