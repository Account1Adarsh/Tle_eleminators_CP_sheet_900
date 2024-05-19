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
            int i=0,j=n-1;
            int k=n;
            bool flag=false;
            while(i<j){
                if(arr[i]==k||arr[j]==k){
                        if(arr[i]==k){
                            i++;
                        }
                        else{
                            j--;
                        }
                        k--;
                }
                else{
                    flag=true;
                    break;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
                int c=0;
                for(int i=0;i<n;i++){
                    if(arr[i]==k){
                        c=i;
                        break;
                    }
                }
                cout<<i+1<<" "<<c+1<<" "<<j+1<<endl;
            }
            else cout<<"NO"<<endl;
    }
    return 0;
}
