// Done in GFG Practice
// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
        //code here
        map<string, vector<string>> mp;
        for(int i=0;i<str.size();i++)
        {
            string s=str[i];
            sort(s.begin(),s.end());
            mp[s].push_back(str[i]);
        }
        vector<vector<string>> v(mp.size());
        int i=0;
        for(auto x:mp)
        {
            auto m=x.second;
            for(int j=0;j<m.size();j++)
            v[i].push_back(m[j]);
            i++;
        }
        
        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
