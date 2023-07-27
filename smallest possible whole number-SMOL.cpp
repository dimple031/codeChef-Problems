#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    //method 1- but time limit exceeded
	   // int ans=n-k;
	   // while(ans>=0)
	   // {
	   //     n = ans;
     //         ans = n - k;
	   // }
	   // cout<<n<<endl;
    //method 2
    //a division by zero issue in code due to the modulo operation.
    //To handle this, we can add a conditional check to avoid division by zero when k is zero.
	   int ans = (k == 0) ? n :n%k;
	   cout<<ans<<endl;
	}
	return 0;
}
