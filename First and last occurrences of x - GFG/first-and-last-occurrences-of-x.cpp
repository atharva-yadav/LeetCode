// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // int start = 0;
    // int end = n-1;
    // int mid = start-(end+start)/2;
    // vector<int> v;
    // int fans=0;
    // int lans=0;
    
    // while(start<=end)
    // {
    //     if(arr[mid] == x){
    //         fans = mid;
    //         end = mid-1;
    //     }
    //     else if(arr[mid] < x){
    //         start = mid+1;
    //     }
    //     else{
    //         end = mid - 1;
    //     }
    //     mid = start-(end+start)/2;
    // }
    
    // while(start<=end)
    // {
    //     if(arr[mid] == x){
    //         lans = mid;
    //         start = mid+1;
    //     }
    //     else if(arr[mid] < x){
    //         start = mid+1;
    //     }
    //     else{
    //         end = mid - 1;
    //     }
    //     mid = start-(end+start)/2;
    // }
    
    // v.push_back(fans);
    // v.push_back(lans);
    // return v;
    
    vector<int> v;
    int f = -1;
    int l = -1;
    
    for(int i=0; i<n; i++){
        if(f==-1 && arr[i] == x)
            f = i;
        
        if(arr[i] == x)
            l = i;
            
        
        
        
    }
    v.push_back(f);
        v.push_back(l);
    return v;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends