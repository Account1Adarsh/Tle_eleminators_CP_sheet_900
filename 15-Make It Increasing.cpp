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
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll count=0;
        ll res=0;
        for(int i=n-2;i>=0;i--){
            if(arr[i]==0 and i!=0){
                    res=-1;
                    break;
            }
            if(arr[i]>=arr[i+1]){
               ll a;
               if(arr[i]>0){
                a=log2(arr[i]);
               }
               else{
                    res=-1;
                    break;
               }
               ll b;
               if(arr[i+1]>0) b=log2(arr[i+1]);
               else{
                    res=-1;
                    break;
               }

               arr[i]/=pow(2,a-b);
               count+=(a-b);
                if(arr[i]>=arr[i+1]){
                    arr[i]/=2;
                    count++;
                }
                if(arr[i]==0 and i!=0){
                    res=-1;
                    break;
                }
                
            }
            
            
        }
        if(res==0){
            cout<<count<<endl;
        }
        else cout<<res<<endl;
    }
    return 0;
}
