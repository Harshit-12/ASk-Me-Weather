#include <bits/stdc++.h>
using namespace std;
int one_way(string s){
    int i=0,j=s.size();
    int c=0;
    while (i<=j)
    {
        if (s[i]!=s[j]){
            i++;c++;
        }
        else{
            i++;j--;
        }
    }
    return c;
}
int another_way(string s){
    int i=0,j=s.size();
    int c=0;
    while (i<=j)
    {
        if (s[i]!=s[j]){
            j--;c++;
        }
        else{
            i++;j--;
        }
    }
    return c;
}
 bool validPalindrome(string s) {
    int c=0;
    int n=s.size();
    if (n<2) return true;
    int i=0,j=s.size()-1;
    int c1=one_way(s);
    int c2=another_way(s);

        return (c1<2 or c2<2);
    }
    int main(){
        string s;
        cin>>s;
        if(validPalindrome(s))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }