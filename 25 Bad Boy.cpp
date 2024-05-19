#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,i,j;
        cin>>n>>m>>i>>j;
        int p=(n+1)/2;
        int q=(m+1)/2;
        //I
        if(i>=p and j<=q){
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl;
        }
        else if(i<=p and j<=q){
            cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
        }
        else if(i<=p and j>=q){
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<endl; 
        }
        else if(i>=p and j>=q){
            cout<<n<<" "<<1<<" "<<1<<" "<<m<<endl;
        }
    }
    return 0;
}
