#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        string s;
        cin>>s;
        int count;
        if(s[0]=='c' && s[1]=='o' && s[2]=='d' && s[3]=='e' && s[4]=='d' && s[5]=='o' && s[6]=='c')
        {
         cout<<"YES"<<endl;
         break;
        }

        else
        {
            cout<< "NO"<< endl;
        }
    }
}
