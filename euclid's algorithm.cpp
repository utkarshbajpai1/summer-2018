/* euclid's algorithm to find the greatest common divisor*/
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
/*bool comptypedef double d;
are(string &s1,string &s2)  // sort for multiple strings
{return s1.size() < s2.size();// sort(arr, arr+n, compare);}*/

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    gcd(b, a%b);
}

int main(){
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a, b;
    cin>>a>>b;
    cout<<gcd(a,b);
return 0;
}

