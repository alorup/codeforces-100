#include <bits/stdc++.h>
using namespace std;
int main(){ int n; cin>>n; int h, imax=0, imin=0; int maxh=-1, minh=1e9; for(int i=1;i<=n;i++){ cin>>h; if(h>maxh){ maxh=h; imax=i; } if(h<=minh){ minh=h; imin=i; } }
    int moves = (imax-1) + (n - imin);
    if(imax>imin) moves--;
    cout<<moves<<"\n";
}
