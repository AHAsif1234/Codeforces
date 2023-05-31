#include<iostream>
using namespace std;
int main()
{
    int n,x,y,count=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x>y)
        {
            count++;
        }
        else if(x<y)
        {
            count--;
        }
    }



    if(count>0)
    {
        cout<< "Mishka"<<endl;
    }
    else if(count==0)
    {
        cout<< "Friendship is magic!^^"<<endl;
    }
    else
    {
        cout<< "Chris"<<endl;
    }
}

