#include <bits/stdc++.h>
using namespace std;
long long check(vector<long long> v,long long p){
    long long s=0;
    for (int i=0;i<v.size();i++){
        if (v[i]<=p)
        s+=(p-v[i]);
        else
        s+=(v[i]-p);
    }
    return s;
}
int main() {

    long long n;
    cin >>n;
    vector<long long> v;
    long long ans;
    for (long long i = 0; i < n;i++) {
        cin >> v[i];
    }
    long long d1,d2,d3;
    sort(v.begin(), v.end());
    long long c=v[n/2];
    d1=check(v,c);
    ans=c;
    // cout<<c;
    long long p=v[(n-1)/2];
    d2=check(v,p);
    if (d1<d2) ans=p;
    long long t=v[(n+1)/2];
    d3=check(v,t);
    if (d3<d2 and d3<d1) ans=t;
    // cout<<d1<<" "<<d2<<" "<<d3<<endl;
    cout<<ans;
    return 0;
}