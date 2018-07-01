#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

int main(){
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    int m, n;
    cin>>m>>n;
    map<string, int> magazine;
    map<string, int> note;

    string word;

    for(int i=0; i<m; i++){
        cin>>word;
        magazine[word]++;
    }

    for(int i=0; i<n; i++){
        cin>>word;
        note[word]++;
    }

    map<string, int>:: iterator it;

    bool success = 1;
    for(it = note.begin(); it!= note.end(); it++){
        if(magazine[it->first] < it->second){
            success = 0;
            break;
        }
    }

    if(success){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
return 0;
}

