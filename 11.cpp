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
        vector<int> v;
        if(arr[0]==1){
            v.push_back(3);
        }
        else v.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]==1){
                arr[i]=2;
            }
            if(arr[i]%v[i-1]==0){
                v.push_back(arr[i]+1);
            }
            else v.push_back(arr[i]);
        }
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}