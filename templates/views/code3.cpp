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
    // long long ans;
    for (long long i = 0; i < n;i++) {
        cin >> v[i];
    }
    long long d1,d2,d3;
    sort(v.begin(), v.end());
    long long ans =1e9,r=v[0];
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (check(v,v[i])<ans) {
                ans = check(v,v[i]);
                r=v[i];
            }
        }
    }
    cout<<r;
    return 0;
}