#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no";
    cin>>n;
    int i =1;
    int count=0;
    while(i<=n)
    {   i++;
        int j=1;
        
        while(j<=n)
        {
            cout<<count<<"";
            count++;
            j++;
        }
        cout<<""<<endl;
    }
}