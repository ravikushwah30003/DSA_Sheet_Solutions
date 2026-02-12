#include<bits/stdc++.h>
using namespace  std;

void print(int n){
    //base case
    if(n==0)return;
    
    print(n-1);
    cout<<n<<endl;
    
}

int main(){
    int n = 10;

    //function call
    print(n);
}