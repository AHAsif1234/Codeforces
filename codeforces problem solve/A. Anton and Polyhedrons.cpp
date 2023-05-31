#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,count=0;
    cin>>a;

    string arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        if(arr[i]=="Tetrahedron")
        {
            count+=4;
        }
        if(arr[i]=="Cube")
        {
            count+=6;
        }
        if(arr[i]=="Octahedron")
        {
            count+=8;
        }
        if(arr[i]=="Dodecahedron")
        {
            count+=12;
        }
        if(arr[i]=="Icosahedron")
        {
            count+=20;
        }
    }
    cout<<count;
}
