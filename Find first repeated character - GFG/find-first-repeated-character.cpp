// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    set<char> se;
    string ans = "";
    for(int i=0; i<s.length(); i++){
        char a = s[i];
        if(se.find(s[i]) != se.end()){
            ans = ans+a;
            return ans;
        }
        else{
            se.insert(a);
        }
    }
    return "-1";
}