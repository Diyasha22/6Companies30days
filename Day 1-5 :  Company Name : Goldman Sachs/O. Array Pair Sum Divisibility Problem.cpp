// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n=nums.size();
        if(n%2!=0)
        return false;
      unordered_map<int,int> u;
        for(int i=0;i<n;i++)
        {
            u[nums[i]%k]++;
        }
        if(u[0]%2!=0)                                  // If remainder=0, target sum exists, then it should be an even pair (k,k) at east
        return false;
        if(k%2==0)                                      //If k is even, and k/2 exists, then it should be an even pair (k/2, k/2) at east
        if(u.find(k/2)!=u.end() && u[k/2]%2!=0)
        return false;
        for(auto x: u)
        {
            int rem=k-x.first;                         //If 9%12=9 then 12-9=3 should exist, for a valid pair (9, 3) & vice-versa
            if(x.first!=0 && u[rem]!=x.second)
            return false;
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends
