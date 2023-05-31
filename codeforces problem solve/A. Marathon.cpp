#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
     while(a--){
        int arr[4];
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];

        }
        int count=0;
        for(int i=1;i<4;i++)
        {
            if(arr[i]>arr[0])
            {
                count++;
            }
        }
        cout<<count<<endl;;
     }

}
