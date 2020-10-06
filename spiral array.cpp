#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{ cout<<endl;
	    int m,n;
	    cin>>m>>n;
	    int arr[m][n];
	    for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	    cin>>arr[i][j];
	    int lm=0,ln=0;
	    while(lm<m && ln<n)
	    {
	        for(int i=ln;i<n;i++)
	        {
	            cout<<arr[lm][i]<<" ";
	            }lm++;
	        for(int i=lm;i<m;i++)
	        {
	            cout<<arr[i][n-1]<<" ";
	        }    n--;
	        if(lm<m)
	        {
	       for(int i=n-1;i>=ln;i--)
	       {
	           cout<<arr[m-1][i]<<" ";
	           
	       }m--;
	        }
	        if(ln<n)
	        {
	            for(int i=m-1;i>=lm;i--)
	            cout<<arr[i][ln]<<" ";
	            ln++;
	        }
	        
	        
	    }
	    
	    
	    
	        
	    
	}
}
