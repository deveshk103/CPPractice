#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int count = 0;
        // for(int i=0; i<=n; i++)
        while(n>0){
            int side = floor(sqrt(n));
            n -= side*side;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}