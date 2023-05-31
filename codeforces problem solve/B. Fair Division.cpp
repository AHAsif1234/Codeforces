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
        int count1=0;
        int count2=0;
        int arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                count1++;
            }
            else
                count2++;


        }
        if(count1==2)
        {
            cout<<"NO"<<endl;
        }
        else if(count1%2==0)
            {
                cout<< "YES"<<endl;
            }
            else
                cout<<"NO"<<endl;

    }
}
