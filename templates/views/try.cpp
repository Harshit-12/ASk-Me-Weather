#include <bits/stdc++.h>
using namespace std;
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long d;
	    cin>>d;
	    long long n;
	    cin>>n;
	    string s=to_string(n);
        long long c0=count(s.begin(),s.begin(),'0');
        long long c5=count(s.begin(),s.begin(),'5');
	    if (c0>0 or c5>0) cout<<"YES\n";
	    else cout<<"NO\n";
	}
    return 0;
}