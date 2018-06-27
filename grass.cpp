#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int p,y;
    cin>>p>>y;

    int x  = 0;
    int i;
    for(i=y; i>p; i--){
        x = 0;
        for(int j=2; j*j <= i && j<=p; j++){
            if(i%j == 0){
                x = 1;
                break;
            }
        }

        if(x == 0){
            break;
        }
    }

    if(i>p){
        cout<<i;
    }else{
        cout<<-1;
    }
return 0;
}


