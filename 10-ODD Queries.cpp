#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]%=2;
        }
        ll presum[n];
        presum[0]=arr[0];
        for(int i=1;i<n;i++){
            presum[i]=presum[i-1]+arr[i];
            presum[i]%=2;
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            l--;
            r--;
            int pre=0;
            int post=0;
            if(l!=0){
                pre=presum[l-1];
            }
            post=presum[n-1]-presum[r];

            int g=pre+post+(k*(r-l+1)%2);
            if(g%2==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}
