
#include<bits/stdc++.h>
using namespace std ;

int Q ;
long long int L , R , DP[65][2] , A[65][2];
void pre(){
    DP[0][0] = DP[0][1] = 1 ;
    for(int i=1;i<=64;i++){
        DP[i][0] = (DP[i-1][0]+DP[i-1][1]) ;
        DP[i][1] = (DP[i-1][0]+DP[i-1][1]) ;
    }
}

void solve(){
    long long sum = 0 ;
    for(int i=63;i>=0;i--){
        A[i][0] += sum ;
        if(L & (1LL << i)){
            A[i][0] += (L - DP[i][0]) ;
            sum += (DP[i][0]/2) ;
            L -= DP[i][0] ;
        }
    }
    R ++ ;
    sum = 0 ;
    for(int i=63;i>=0;i--){
        A[i][1] += sum ;
        if(R & (1LL << i)){
            A[i][1] += (R - DP[i][1]) ;
            sum += (DP[i][1]/2) ;
            R -= DP[i][1] ;
        }
    }
    sum = 0 ;
    for(int i=63;i>=0;i--){
        A[i][1] -= A[i][0] ;
        A[i][1] %= 2 ;
        if(A[i][1])
            sum += (1LL << i) ;
    }
    cout << sum << endl ;
}
int main(){
    pre() ;
    cin >> Q ;
    while(Q -- ){
        cin >> L >>  R ;
        solve() ;
    }
    return 0 ;
}
