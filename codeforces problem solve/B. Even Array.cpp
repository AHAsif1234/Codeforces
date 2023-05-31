#include<iostream>
using namespace std;
int main()
{

    int a;
    cin>>a;
    while(a--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        int top[n+1]={0};
        int down[n+1]={0};

        int change1=0;
        int change2=0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

           top[i]=i%2;
           down[i]=arr[i]%2;

            if(top[i]!=down[i])
            {
                if(top[i]==1)
                {
                    change1++;
                }
                else
                {
                    change2++;
                }
            }
        }
        if(change1!=change2)
        {
            cout<< "-1"<<endl;
        }
        else
        {
            cout<<change1<<endl;
        }

    }
}
