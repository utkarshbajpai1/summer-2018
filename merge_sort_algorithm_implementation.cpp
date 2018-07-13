#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

void merge(int* a, int* l, int leftCnt, int* r, int rightCnt){

    int i=0, j=0, k = 0;
    while(i<leftCnt && j<rightCnt){
        if(l[i] <= r[j]){
            a[k] = l[i];
            k++;
            i++;
        }else{
            a[k] = r[j];
            k++;
            j++;
        }
    }

    while(i<leftCnt){
        a[k] = l[i];
        k++;
        i++;
    }

    while(j<rightCnt){
      a[k] = r[j];
      k++;
      j++;
    }
}

void mergesort(int* a, int n){
    if(n<2){
        return;
    }
    int mid = n/2;
    int* left;
    int* right;

    left  = (int* )malloc(mid*sizeof(int));
    right = (int* )malloc((n-mid)*sizeof(int));

    int i;
    for(i=0; i<mid; i++){
        left[i] = a[i];
    }

    for(i=mid; i<n; i++){
        right[i-mid] = a[i];
    }

    mergesort(left, mid);
    mergesort(right, n-mid);
    merge(a, left, mid, right, n-mid);
    free(left);
    free(right);

}
int main(){
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
   int a[6] = {2, 5, 1, 3, 7, 4};
   int n = sizeof(a) / sizeof(a[0]);
    mergesort(a, n);
    for(int i=0; i<6; i++){
        cout<<a[i]<<" ";
    }

return 0;
}


