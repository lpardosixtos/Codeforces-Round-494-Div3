#include <bits/stdc++.h>

using namespace std;

int main(void){

    int a, b, x;
    cin >> a >> b >> x;
    if(a<=b){
        string ans;
        int changes=-1;
        int ind=1, as=0, bs=0;
        while(changes<x-1){
            if(ind==0){
                ans.push_back('0');
                as++;
                ind=1;
            }
            else{
                ans.push_back('1');
                bs++;
                ind=0;
            }
            changes++;
        }
        if(ind==1){
            while(as<a){
                ans.push_back('0');
                as++;
            }
            while(bs<b){
                ans.push_back('1');
                bs++;
            }
        }
        else{
            while(bs<b){
                ans.push_back('1');
                bs++;
            }
            while(as<a){
                ans.push_back('0');
                as++;
            }
        }
        cout << ans << "\n";
    }
    else{
        string ans;
        int changes=-1;
        int ind=0, as=0, bs=0;
        while(changes<x-1){
            if(ind==0){
                ans.push_back('0');
                as++;
                ind=1;
            }
            else{
                ans.push_back('1');
                bs++;
                ind=0;
            }
            changes++;
        }
        if(ind==1){
            while(as<a){
                ans.push_back('0');
                as++;
            }
            while(bs<b){
                ans.push_back('1');
                bs++;
            }
        }
        else{
            while(bs<b){
                ans.push_back('1');
                bs++;
            }
            while(as<a){
                ans.push_back('0');
                as++;
            }
        }
        cout << ans << "\n";
    }


    return 0;
}
