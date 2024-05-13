    #include<bits/stdc++.h>
    using namespace std;

    typedef long long ll;

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int arr[n];
            
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            int less=arr[0];
            int more=arr[n-1];
            int diff=arr[n-1]-arr[0];
            
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    diff=max(diff,arr[i]-arr[i+1]);
                }
                // else diff=max(diff,arr[i]-arr[i+1]);
            }
            int a=arr[0];
            int b=arr[n-1];
            for(int i=1;i<n;i++){
                more=max(more,arr[i]);
            }
            diff=max(diff,more-a);
            for(int i=0;i<n-1;i++) less=min(less,arr[i]);
            diff=max(diff,b-less);
            cout<<diff<<endl;
        }
        return 0;
    }
