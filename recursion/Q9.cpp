#include<bits/stdc++.h>
using namespace  std;

bool check(int l,int r,string str){
    if(l>r)return true;
    if(str[l]==str[r])return check(l+1,r-1,str);
    else return false;
}

//another method with only one variable
bool check2(int idx,string str){
    if(idx>=str.size()/2)return true;
    if(str[idx]==str[str.size()-idx-1])return check2(idx+1,str);
    else return false;
}

int main(){
    string str = "shalini";

    cout<<check(0,str.size()-1,str)<<endl;
    cout<<check2(0,str)<<endl;
} 