#include<bits/stdc++.h>
using namespace std;


double myPow(double x, int n) {
    if (n==0) return 1;
    if (n==1) return x;
    if (n==-1) return 1/x;
    if(x==0) return 0;
    double half = myPow(x, n/2);
    return half * half * myPow(x, n%2);
}
int main(){
    double x=2.1000;
    int n=10;
    double ans=myPow(x,n);
    cout<<ans;
    return 0;
}