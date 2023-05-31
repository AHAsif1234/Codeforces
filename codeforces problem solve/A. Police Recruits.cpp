#include<iostream>
using namespace std;
int main()
{
    int a,police=0,crime=0;
    cin>>a;

    for(int i=0;i<a;i++)
    {
       int x;
       cin>>x;
        if(x>0)
        {
            police+=x;
        }
        else
        {
            if(police<1)
            {
                crime++;
            }
            else
                police--;
        }
    }
    cout<<crime;
}
