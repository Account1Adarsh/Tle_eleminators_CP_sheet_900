#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int res=0;
        int temp=1;
        for(int i=1;i<n;i++){
            temp=1;
            while(arr[i]-arr[i-1]<=k and i<n){
                temp++;
                i++;
            }
            res=max(res,temp);
        }
        res=max(res,temp);
        cout<<n-res<<endl;
    }
    return 0;
}
