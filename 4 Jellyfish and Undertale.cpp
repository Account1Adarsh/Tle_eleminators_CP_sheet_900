#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int x[n];
        for(int i=0;i<n;i++) cin>>x[i];
        
        long long sum=b;
        for(int i=0;i<n;i++){
             sum+=min(x[i]+1,a)-1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
