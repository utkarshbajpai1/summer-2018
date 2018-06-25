#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main(){
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a[5] = {1, 5, 10, 20, 100};
    int n;
    cin>>n;
    int count = 0;
    for(int i=4; i>=0; i--){
        while(n/a[i] != 0){
            count += n/a[i];
            n = n%a[i];
        }
    }

    cout<<count;
return 0;
}

