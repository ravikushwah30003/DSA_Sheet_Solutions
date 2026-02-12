#include<bits/stdc++.h>
using namespace  std;

void print(int i,int n){
    //base case
    if(i>n)return;

    cout<<i<<endl;
    print(i+1,n);
}

int main(){
    int n = 10;

    //function call
    print(1,n);
}