// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	
	ull getNthUglyNo(int n) {
	   
	     int count=0;
	    set<ull> s;
	    ull x;
	    s.insert(1);
	    while(!s.empty())
	    {
	        auto i=s.begin();
        x=*i;
        s.erase(i);
        count++;
         if(count==n)
	        break;
        s.insert(x*2);
        s.insert(x*3);
        s.insert(x*5);
	    }
	    return x;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
