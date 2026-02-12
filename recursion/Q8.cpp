#include<bits/stdc++.h>
using namespace  std;

void reverseStr(int idx,string original,string reversed){
    //base case:
    if(idx<0){
        cout<<reversed<<endl;
        return;
    }
    reverseStr(idx-1,original,reversed+=original[idx]);

}


//another method
string reverseStr2(int idx,string s){
    //base case:
    if(idx<0)return "";

    return s[idx]+reverseStr2(idx-1,s);
}

//another mehtod
void printReverse(int l,int r,string str){
    //base case:
    if(l>r){
        cout<<str<<endl;
        return;
    }

    swap(str[l],str[r]);
    printReverse(l+1,r-1,str);
}

int main(){
    string s = "Jeongtugi";
    int n = s.size();
    
    //function call
    reverseStr(n-1,s,"");

    cout<<reverseStr2(n-1,s)<<endl;

    printReverse(0,n-1,s);
    
}