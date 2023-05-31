#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a+3];
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    int sereja=0,dima=0;
    int l=0;
    int r=0;
    int z=0;
    while(l<=r)
    {
        if(z%2==0)
        {



            if(arr[l]>arr[r])
            {
                sereja+=arr[l];
                l++;
            }
        }
        else
        {
            sereja+=arr[r];
            r--;
        }
}
        else
        {
            if(arr[l]>arr[r])
            {
                dima+=arr[l];
                l++;
            }
        }
        else
        {
            dima+=arr[r];
            r--;
        }
    }
    z++;
}
cout<<sereja<< " "<<dima<<endl;

}



