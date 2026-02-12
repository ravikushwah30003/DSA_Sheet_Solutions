#include<bits/stdc++.h>
using namespace  std;

void printName1(int n,string name){
    if(n==0)return;
    cout<<name<<endl;
    printName1(n-1,name);
}


void printName2(int i,int n){
    if(i>n)return;
    cout<<"Jeongtugi is adorable"<<endl;
    printName2(i+1,n);
}

int main(){
    int n = 5;

    printName1(n,"Jeongtugi");

    printName2(1,n);

}