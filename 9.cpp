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
        int p=1;
        for(int i=0;i<n;i++){
             cin>>arr[i];
        }
        int temp[n];
        for(int i=0;i<n;i++){
            int k=abs(arr[i]-(i+1));
            temp[i]=k; 
        }
        int a=temp[0];
        for(int i=0;i<n;i++){
            a=__gcd(a,temp[i]);
        }
        cout<<a<<endl;
    }
    return 0;
}