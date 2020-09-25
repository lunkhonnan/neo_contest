// idea : swap lan luot va so sanh voi so ban dau lon hon gan max
#include<bits/stdc++.h>
using namespace std;

void Try(int k,string s,string &max) {
    int n = s.length() ;
    if(k==0)
        return ;
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(s[i] < s[j]) {
                swap(s[i],s[j]);
                if(s.compare(max) > 0) {
                    max = s;
                }
                Try(k-1,s,max);
                swap(s[i],s[j]);
            }
        }
    }
}
int main() {
    int k,t;
    cin>>t;
    while(t--) {
        string s;
        string max = s;
        cin>>k>>s;
        Try(k,s,max);
        cout<<max;
        cout<<endl;
    }
    return 0;
}
