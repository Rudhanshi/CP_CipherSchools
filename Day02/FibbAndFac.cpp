#include<bits/stdc++.h>
using namespace std;

int fac(int n){
    if(n<=1)
     return 1;
    else
     return n*fac(n-1);
}

int fibbo(int n){
    if(n==0)
     return 0;
    else if(n==1)
     return 1;
    else
     return fibbo(n-1)+fibbo(n-2);
   
}

int main(){
    int n;
    cin>>n;
    cout<<"fib : " <<fibbo(n)<<endl;
    cout<<"fac : " << fac(n)<<endl;
    return 0;
}
