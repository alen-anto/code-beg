
#include <iostream>
#include <string>
using namespace std;
int ifprime(int n)
{
    int c=0;
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {return 0;
        c++;}
            
        
    }
    if(c==0)
    return 1;
    
}
int main()
{
 int a,b,count=0;
 cin>>a>>b;
 for(int i=a;i<=b;i++)
 {
    if(ifprime(i))
    {
        if(ifprime(i+6))
        count++;
    }
    
 }
 cout<<count;
          
}
