#include<iostream>
using  namespace std;

int main()
{
    int n;
    cout<<"enter the value of n \n";
    cin>>n;


    int row=1;
    
    while (row<=n)
    {  
        int col =1;
       char ch='A'+row-1;
        while (col <=row )
        { 
            
            cout<<ch;
            
            
            col=col+1;

        }
     cout<<endl;   
    row =row+1;    
    }
    return 0;
}