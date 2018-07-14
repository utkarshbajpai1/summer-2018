#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main(){
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    if(n == 1 && a[0] == 1){
        cout<<1<<endl;
        cout<<1;
        return 0;
    }
    int cnt  = 1;
    int cntr = 1;
    vector<int> v;
    for(int i=1; i<n; i++){

        if(a[i] != a[i-1] + 1){
            cnt++;
            v.push_back(cntr);
            cntr = 0;
        }

        cntr++;

         if(i == n-1){
            v.push_back(cntr);
        }
    }

    cout<<cnt<<"\n";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
return 0;
}


