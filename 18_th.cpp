#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;

    int row=1;
    while (row<=n)
    {
        
        int space=n-row+1;
        
        int col=1;
        while (col<=space)
        {
            cout<<"*";
            col++;
        }
       row++; 
      cout<<endl;
    }
    

    return 0;
}