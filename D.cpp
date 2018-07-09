#include <bits/stdc++.h>

using namespace std;

int main(void){

    int n, q;
    cin >> n >> q;
    map<int, int> pots;
    int aux=1;
    for(int i=0; i<=30; i++){
        pots.insert(pair<int, int> (aux, i) );
        aux=aux << 1;
    }
    int A[64]={0};
    for(int i=0; i<n; i++){
        int auxi;
        cin >> auxi;
        map<int, int>::iterator it=pots.find(auxi);
        auxi=it->second;
        A[auxi]++;
    }
    while(q--){
        int b;
        cin >> b;
        int coins=0;
        for(int i=30; i>=0; i--){
            int potaux=1<<i;
            int auxquot=min(b/potaux, A[i]);
            coins+=auxquot;
            b-=auxquot*potaux;
        }
        if(b==0){
            cout << coins << "\n";
        }
        else cout << -1 << "\n";
    }




    return 0;
}
