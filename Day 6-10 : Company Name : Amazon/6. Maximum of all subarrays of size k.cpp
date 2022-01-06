#include <bits/stdc++.h>
using namespace std;


class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        int i=0,j=0;
        deque<int> q;
        vector <int> v;
        while(j<n)
        {
            while(q.size()>0 and q.back()<arr[j])
            q.pop_back();
           q.push_back(arr[j]);
            if(j-i+1<k)
            j++;
              else
              {
                  v.push_back(q.front());
                  if(arr[i]==q.front())
                  q.pop_front();
                  i++;j++;
              }
        }
        return v;
        
    }
};


int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
		return 0;
}
