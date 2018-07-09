#include <bits/stdc++.h>

using namespace std;

int main(void){

    int n, k;
    cin >> n >> k;
    int A[n+1];
    A[0]=0;
    for(int i=1; i<=n; i++){
        int aux;
        cin >> aux;
        A[i]=A[i-1]+aux;
    }
    double ans=0;
    while(k<=n){
        for(int i=0; i<=n-k; i++){
            double aux=((double)A[i+k]-(double)A[i])/(double)k;
            ans=max(aux, ans);
        }
        k++;
    }
    cout << fixed << setprecision(15) << ans << "\n";

    return 0;
}
