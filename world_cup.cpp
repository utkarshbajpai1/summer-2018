#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    int a[n+5];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1, j=0; ; i++, j++){
        if(i == n+1){
            i = 1;
        }
        if(a[i] <= j){
            cout<<i<<"\n";
            return 0;
        }
    }
return 0;
}

