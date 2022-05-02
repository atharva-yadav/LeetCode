// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& arr, int n) {

        // unordered_map<int, int> mp;
        
        // for(int i=1; i<=n; i++){
        //     mp[i]=0;
        // }
        
        // for(int i=1;i<=n;i++){
        //     mp[arr[i]]++;
        // }
        
        // for(int i=1; i<=n; i++){
        //     if(mp[i] == 0)
        //         return mp[i];
        // }
        // set<int>se;
        // for(int i=0;i<arr.size();i++){
        //     se.insert(arr[i]);
        // }
        
        // for(int i = 1;i<=n;i++){
        //     if(se.find(i)==se.end()){
        //         return i;
        //     }
        // }
        // return -1;
        
        int xor1 = 0;
        for(int i=0;i<arr.size();i++){
            xor1^=arr[i];
         }
         for(int i=1;i<=n;i++){
             xor1^=i;
         }
         return xor1;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends