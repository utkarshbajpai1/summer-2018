#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string pattern = "abcaby";
    int n = pattern.length();
    int a[n];
    int i=1;
    int j=0;
    a[0] = 0;

    while(i < n){   // n -> where n is the length of the array
        if(pattern[i] == pattern[j]){
            a[i] = j+1;
            i++;
            j++;
        }else if(pattern[i] != pattern[j]){
            if(j == 0){
                a[i] = 0;
                i++;
            }else{
                while(j > 0 ){
                    j--;
                    j = a[j];

                    if(j == 0 && pattern[i] != pattern[j]){
                        a[i] = 0;
                        i++;
                        break;
                    }else if(pattern[i] == pattern[j]){
                        a[i] = j+1;
                        i++;
                        j++;
                        break;
                    }
                }
            }

        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

return 0;
}
