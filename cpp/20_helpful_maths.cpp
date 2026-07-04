#include <bits/stdc++.h>
using namespace std;
int main(){ string s; cin>>s; vector<int> nums; string t;
    for(char c: s){ if(c=='+'){ nums.push_back(stoi(t)); t.clear(); } else t.push_back(c); }
    if(!t.empty()) nums.push_back(stoi(t)); sort(nums.begin(), nums.end());
    for(size_t i=0;i<nums.size();i++){ if(i) cout<<"+"; cout<<nums[i]; } cout<<"\n"; }
