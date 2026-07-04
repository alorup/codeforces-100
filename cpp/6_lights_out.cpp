#include <bits/stdc++.h>
using namespace std;
int main(){ int a[3][3]; for(int i=0;i<3;i++) for(int j=0;j<3;j++) cin>>a[i][j]; for(int i=0;i<3;i++){ for(int j=0;j<3;j++){ int s = 1 + a[i][j]; if(i>0) s+=a[i-1][j]; if(i<2) s+=a[i+1][j]; if(j>0) s+=a[i][j-1]; if(j<2) s+=a[i][j+1]; cout<<(s%2); } cout<<"\n"; } }
