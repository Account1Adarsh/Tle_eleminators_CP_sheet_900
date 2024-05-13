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
        int z=0;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            if(arr[i]==0) z++;
        }
        if(z==0) cout<<1<<endl;
        else if(z==n) cout<<0<<endl;
        else {
            int i=0;
            while(arr[i]==0 and i<n) i++;
            int a=i;
            i=n-1;
            while(arr[i]==0 and i>=0) i--;
            int b=i+1;
            int ze=0;
            for(int i=a;i<b;i++){
                if(arr[i]==0) ze++;
            }
            if(ze==0) cout<<1<<endl;
            else cout<<2<<endl;
        }
        
    }
    return 0;
}
