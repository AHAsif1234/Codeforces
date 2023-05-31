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
        string s;
        cin>>s;
        int count=0;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=s[i+1])
            {
                count++;
            }
            if(s[i]=='ab' && s[i+1]=='ba')
            {
                count++;
            }
            if(s[i]=='ac' && s[i+1]=='ca')
            {
                count++;
            }
        }
        cout<<count;
    }
}
