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
        int div=a/2020;
        if(div<1)
        {
            cout<< "NO"<<endl;
        }
        else
        {
            int lastdigit=a%2020;
            if(lastdigit>div)
            {
                cout<< "NO"<<endl;
            }
            else
            {
                cout<< "YES"<<endl;
            }

        }
    }
}
