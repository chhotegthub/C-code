//#include<iostream>
//using namespace std;
 /*int sum(int num[], int n)
 {
    int sum=0;
    for(int i=0;i<n; i++)
    {
        sum= sum+num[i];
    }
    return sum;
 }
int main()
{
    int size;
    int f;
    cout<<"ente rthe size of the array";
    cin>>size;
    int num[100];
    for(int i=0; i<size; i++)
    {
        cout<<"enter the value of the array";
        cin>>num[i];

    }
    cout<<"enter the element you wnt to search";
    cin>>f;
    for(int i =0; i<size; i++)
    {
        if(f==num[i]){
            cout<<"elemnt is found"<<num[i];
            

        }
        
    }
    cout<<"elemwnt is not found in the array";
    
    

}*/
#include<iostream>
using namespace std;

int main()
{
    int size, f;
    cout << "Enter the size of the array: ";
    cin >> size;

    int num[100];
    
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the value of the array: ";
        cin >> num[i];
    }

    cout << "Enter the element you want to search: ";
    cin >> f;

    bool found = false;
    for(int i = 0; i < size; i++)
    {
        if(f == num[i])
        {
            cout << "Element " << num[i] << " is found at index " << i << endl;
            found = true;
            break; // Exit the loop once the element is found
        }
    }

    if (!found)
    {
        cout << "Element is not found in the array" << endl;
    }

    return 0;
}

