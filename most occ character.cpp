#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   int arr[200]={0};
   getline(cin,s);
   for(int i=0;i<s.size();i++)
   {
    arr[int(s[i])]++;
   }
   
   
   int lar=arr[0],pos;
   for(int i=0;i<200;i++)
   {
     if(arr[i]>lar)
     {lar=arr[i];
     pos=i;}
   }
   cout<<char(pos);
   
}
