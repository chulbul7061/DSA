#include<iostream>
using  namespace std;

int main()
{
    int n;
    cout<<"enter the value of n \n";
    cin>>n;


    int row=1;
    int count=row;
    while (row<=n)
    {   int col =1;
        while (col <=row )
        {
            cout<<row<<ends;
            count++;
            col=col+1;

        }
     cout<<endl;   
    row =row+1;    
    }
    return 0;
}