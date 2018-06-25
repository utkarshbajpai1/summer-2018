#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef double d;
/*bool compare(string &s1,string &s2)  // sort for multiple strings
{return s1.size() < s2.size();// sort(arr, arr+n, compare);}*/


int main(){
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    string str1 = "abcdaf";
    string str2 = "acbcf";
    int m = str1.length();
    int n = str2.length();

    int a[m+1][n+1];

    int x = 0;
    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            if(i == 0 || j == 0){
                a[i][j] = 0;
            }else if(str1[i-1] != str2[j-1]){
                    a[i][j] = max(a[i-1][j], a[i][j-1]);
            }else if(str1[i-1] == str2[j-1]){
                a[i][j] = a[i-1][j-1] + 1;
            }
        }
    }

    for(int i=0; i<=m; i++){
        for(int j=0; j<=n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
return 0;
}

