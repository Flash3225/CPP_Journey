#include<iostream>
using namespace std;

int fact(int n){
int factorial=1;
for(int i=1; i<=n; i++){
    factorial=factorial*i;
}
return factorial;
}

int nCr(int n, int r){
    int num= fact(n);
    int denom= fact(r)*fact(n-r);
    return num/denom;
}

int main(){
    int n, r;
    cout<<"Enter the value of n & r to find nCr\n";
    cin>>n>>r;
    cout<<"nCr of following values will be"<<nCr(n,r);

}