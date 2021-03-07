#include <bits/stdc++.h>
using namespace std;



int main()
{
    int row;
    cout<<"Enter the row number: \t";
    cin>>row;


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row-i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    
        
        

    return 0;
}