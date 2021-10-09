#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int t;
    cin>>t;
    while(t--){
        int n,n1,n2;
        cin>>n1>>n2>>n;
        
        //TLE --> Multiple loops I think... Please somebody help
        // while(n>0){  
        //     if (n%2 != 0){
        //         n1 *= 2;
        //     }
        //     else{
        //         n2 *= 2;
        //     }
        //     n--;
        // }
        // int a = max(n1,n2)/min(n1,n2);
        // cout<<a<<endl;
        
        //Working
        if(n%2 == 0){
            cout<<max(n1,n2)/min(n1,n2)<<endl;
        }

        else{
            n1 *= 2;
            cout<<max(n1,n2)/min(n1,n2)<<endl;
        }
    }
    return 0;
}
// Code is correct but not optimal
// Please somebody help
// I don't know anything about constraint handling
