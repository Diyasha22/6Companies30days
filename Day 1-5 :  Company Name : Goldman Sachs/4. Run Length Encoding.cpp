// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  int count=1,i;
  string output="";

  for(i=1;i<src.size();i++)
  {
      if(src[i]==src[i-1])
      count++;
      else
      {
          output+=(src[i-1]);
          string s=to_string(count);
          output+=s;
      //cout<<output<<endl<<count<<endl;
          count=1;
      }
  }
  output+=(src[i-1]);
          string s=to_string(count);
          output+=s;
  return output;
}     
 
