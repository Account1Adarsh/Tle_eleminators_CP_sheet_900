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
        sort(arr,arr+n);
        int m=1;
        int temp=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                temp++;
            }
            else{
                m=max(m,temp);
                temp=1;
            }
        }
        m=max(m,temp);
        if(m==n){
            cout<<0<<endl;
        }
        else{
            int x=m;
            int k=0;
            int left=n-x;
            while(left>0){
                k++;
                left-=x;
                k+=x;
                x*=2;
            }
            if(left<0){
                k+=left;
            }
            cout<<k<<endl;
        }
    }
    return 0;
}