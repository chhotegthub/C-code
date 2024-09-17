#include<iostream>
using namespace std;

int getmax(int num[],int n){
    int maxi = INT8_MIN;
    for(int i =0; i<n;i++)
    {
        maxi= max(maxi,num[i]);
       // if(num[i]>max){
        //    max=num[i];
       // }
        
    }
    return maxi;
    }

int getmin(int num[], int n)
{
    int min= INT8_MAX;
    for(int i = 0; i<n; i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
}  
int main()
{
    int size;
    cout<<"enter the size of the array:-";
    cin>>size;
    int num[100];
    for(int i=0; i<size; i++)
    {
        cout<<"enter the value of the arrays";
        cin>>num[i];
    }
    cout<<"max value is "<<getmax(num, size);
    cout<<"min value is "<<getmin(num, size);
    return 0;

    }