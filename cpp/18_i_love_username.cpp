#include <bits/stdc++.h>
using namespace std;
int main(){ string s; cin>>s; set<char> st; for(char c: s) if(c>='a'&&c<='z') st.insert(c); cout<<st.size()<<"\n"; }
