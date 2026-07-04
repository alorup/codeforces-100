#include <bits/stdc++.h>
using namespace std;
int main(){ int n; if(!(cin>>n)) return 0; string s; bool ok=false; for(int i=0;i<n;i++){ cin>>s; if(s=="f") ok=true; } cout<<(ok?"YES":"NO")<<"\n"; }
