#include <iostream>
using namespace std;
int main()
{
    int n,c=1;
    cout<<"Enter the limit: ";
    cin>>n;
    for(int i=(2*n)-3;i>0;i--)
        {
            cout<<"*";
        }
        cout<<endl;
    for(int i=2;i<=n-1;i++)
    {
        for(int j=n-i;j>=1;j--)
        {
            cout<<"*";
        }
        for(int k=1;k<=c;k++)
        {
            cout<<" ";
        }
        c=c+2;
        for(int j=n-i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=(2*n)-3;i>0;i--)
        {
            cout<<"*";
        }

}