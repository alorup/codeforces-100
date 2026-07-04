#include <bits/stdc++.h>
using namespace std;
int main(){ int n; cin>>n; vector<int> p(n+1); for(int i=1;i<=n;i++) cin>>p[i]; bool ok=true; for(int i=1;i<=n;i++) if(p[p[i]]!=i) { ok=false; break; } cout<<(ok?"YES":"NO")<<"\n"; }
