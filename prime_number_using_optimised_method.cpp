#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

bool is_prime(int n){
    if(n <= 1){
        return false;
    }

    if( n%2 == 0 || n%3 == 0 ){
        return false;
    }

    for(int i=5; i*i<=n; i += 6){
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true;
}
int main(){
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    if(is_prime(122)){
        cout<<"yes";
    }
return 0;
}


