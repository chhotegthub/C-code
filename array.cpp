#include<iostream>
using namespace std;

bool palindrome(char a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e])
        {
            return 0;
        }

    }
}

void reverse(char arr[], int l)
{
    int s=0;
    int e=l-1;
    while(s<e)
    {
        swap(arr[s++], arr[e--]);
    }

}
   

int getlengh(char arr[])
{
    int count = 0;
    for(int i= 0; arr[i] !='\0'; i++ )
    {
        count++;

    }
    return count;
}


int main()
{
    char arr[20];
    cout<<"enter your name :"<<endl;
    cin>>arr;
    cout<<"your name is \n"<<arr;
    int n =getlengh(arr);
    cout<<"lenth is "<<n<<endl;
    reverse(arr ,n);
    cout<<"your name is ";
    cout<<arr;
    return 0; 
}