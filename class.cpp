#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            cout<<"";
        }
        for(int j =1; j<=i+1; j++)
        {
            cout<<j;

        }
        for(int j=i; j>0; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}