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
        int res=0;
        for(int i=0;i<n;i++) cin>>arr[i];
        res=arr[0];
        for(int i=0;i<n;i++) res&=arr[i];
        cout<<res<<endl;
    }
    return 0;
}