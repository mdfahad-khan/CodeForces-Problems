#include<iostream>

using namespace std;
int main()
{
    int a,x,y,z,count=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>a>>y>>z;
        if (a+y+z>=2)
        {
            count++;
        }
    }

     cout<<count<<"\n";


   return 0;
}

