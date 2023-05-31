#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    while(a--)
    {
        int t;
        cin>>t;
        if(1900<=t)
        {
            cout<<"Division 1"<<endl;
        }
        else if(1600<=t<=1900)
        {
            cout<<"Division 2"<<endl;
        }
       else if(1400<=t<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else if(t>=1399)
        {
            cout<<"Division 4"<<endl;
        }








    }

}
