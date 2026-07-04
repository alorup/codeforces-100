#include <bits/stdc++.h>
using namespace std;
bool distinct(int y){ vector<int> seen(10,0); while(y){ int d=y%10; if(seen[d]) return false; seen[d]=1; y/=10; } return true; }
int main(){ int y; cin>>y; while(true){ y++; if(distinct(y)){ cout<<y<<"\n"; break; } } }
