#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            int sum=s[0]+s[1]+s[2];
            int add=s[3]+s[4]+s[5];
            if(sum==add)
            {
                cout<< "YES"<<endl;
                break;
            }
            else
            {
                cout<< "NO"<<endl;
                break;
            }
        }

    }
}
