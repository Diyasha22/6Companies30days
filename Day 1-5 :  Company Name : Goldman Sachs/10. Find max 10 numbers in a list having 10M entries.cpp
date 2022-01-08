#include <bits/stdc++.h>
using namespace std;

int main() {
   int n=100000,k=10;
   int arr[100000];
   for(int i=0;i<100000;i++)
    cin>>arr[i];
   priority_queue<int, vector<int>, greater<int>> pq;
	   int y;
	    for(int i=0;i<100000;i++)
	    {
	    pq.push(arr[i]);
	    if(i>k-1)
	    pq.pop();
	    }
	    while(k--)
        {
	    y=pq.top();
	    cout<<k+1<<" th maximum number: "<<y<<endl;
         pq.pop();

        }
	    /* priority_queue<int> pq2;
	   int z;
	    for(int i=0;i<100000;i++)
	    {
	    pq2.push(arr[i]);
	    if(i>k-1)
	    pq2.pop();
	    }
	    z=pq2.top();
	    cout<<"10 th minimum number: "<<z;*/
    return 0;
}
