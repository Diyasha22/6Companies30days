// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int arr2[n+1];
        memset(arr2,0,sizeof(arr2));
        int *a=new int[2];
        a[0]=-1; a[1]=-1;
        for(int i=0;i<n;i++)
        {
           arr2[arr[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(arr2[i]==2)
            a[0]=i;
            if(arr2[i]==0)
            a[1]=i;
            if(a[0]!=-1 && a[1]!=-1)
            break;
        }
        return a;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
