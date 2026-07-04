#include <bits/stdc++.h>
using namespace std;
int main(){ int k,a,b,c; cin>>k>>a>>b>>c; int cnt=0; for(int i=1;i<=k;i++) if(i%a==0||i%b==0||i%c==0) cnt++; cout<<cnt<<"\n"; }
