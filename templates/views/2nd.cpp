#include <bits/stdc++.h>
using namespace std;
long long getSum(long long n)
{
    long long sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

long long solver(long long n){
       for (long long i=n+1; i<n+10; i++)
       {
           if (getSum(n)%2==0 and getSum(i)%2==1)
            return i;
            else if (getSum(n)%2!=0 and getSum(i)%2==0)
            return i;
       }
}
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
       long long n;
       cin>>n;
    cout<<solver(n)<<endl;
    
	}
	return 0;
}
