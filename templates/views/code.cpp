#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while (t--)
    {
        /* code */
    long long k,l,n,m,a,b,ans;
    cin>>n>>m;
    cin>>k>>l;
    if (n==1 and m==1){
        ans=min(k,l);
    }
    if (2*k<=l){
        a=k;
        b=k;
        ans=a*n*m;
    }
    else if (l<k){
        a=l;b=0;
        if (n%2==0){
            ans=a*(n-1)*m;
        }
        else{
            for (int i=0;i<m;i++){
                if (m%2==0){
                    ans+=a*(n-1);
                }
                else
                ans+=a*(n-2);
            }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
