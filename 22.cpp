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
        for(int i=0;i<n;i++) cin>>arr[i];

        int z=0;
        int one=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) z++;
            else if(arr[i]==1) one++;
        }
        ll k=pow(2,z)*one;
        cout<<k<<endl;
    }
    return 0;
}