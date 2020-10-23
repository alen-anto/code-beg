#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int day,month,year;
        cin>>day>>month>>year;
        int oddm[]={3,6,6,2,4,0,2,5,1,3,6,1};
        int x;
        x=year%100;
        int y;
        y=x/4;
        int z,sum=0;
        if(year>=1900 &&year<2000)
        z=5;
        else if(year>=2000)
        z=4;
    //leap year jan feb -1    
        sum=(z+y+x+oddm[month-1]+day)%7;
        if(sum==1)
        cout<<"Sunday"<<endl;
        else if(sum==2)
        cout<<"Monday"<<endl;
        else if(sum==3)
        cout<<"Tuesday"<<endl;
        else if(sum==4)
        cout<<"Wednesday"<<endl;
        else if(sum==5)
        cout<<"Thursday"<<endl;
        else if(sum==6)
        cout<<"Friday"<<endl;
        else if(sum==0)
        cout<<"Saturday"<<endl;

    }
}
