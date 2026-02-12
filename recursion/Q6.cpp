#include<bits/stdc++.h>
using namespace  std;

int sum(int n){
    //base case
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

//parametrized
void sum2(int n,int s){
    //base case:
    if(n==0){
        cout<<s<<endl;
        return;
    }
    sum2(n-1,s+n);
}

int main(){
    int n = 10;
    cout<<sum(n)<<endl;

    sum2(n,0);
}