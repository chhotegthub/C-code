#include<iostream>
using namespace std;
static int sum=0;
int recursion(int n)
{ 
    if(n==0)
    {
        return sum;
    }
   int last=n%10;
   sum+=last;
      return recursion(n/10);
    
    
     
    
}

int main()
{
    cout<<recursion(120);

}