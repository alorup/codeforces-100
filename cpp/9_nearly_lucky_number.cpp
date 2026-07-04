#include <bits/stdc++.h>
using namespace std;
int main(){ string s; cin>>s; int c=0; for(char ch: s) if(ch=='4' || ch=='7') c++; cout<<((c==4 || c==7)?"YES":"NO")<<"\n"; }
