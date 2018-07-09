#include <bits/stdc++.h>

using namespace std;

int main(void){

    int n;
    cin >> n;
    int A[101];
    memset(A, 0, sizeof A);
    int maxi=0;
    for(int i=0; i<n; i++){
        int aux;
        cin >> aux;
        A[aux]++;
        maxi=max(A[aux], maxi);
    }
    cout << maxi << "\n";


    return 0;
}
