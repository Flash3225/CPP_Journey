#include<iostream>
using namespace std;

int fib(int n){
    int a=0, b=1;
    for(int i=2; i<n; i++){
        int sum=a+b;
        a=b;
        b=sum;
    }
    return b;
}

int main(){
    int x;
    cout<<"Enter the value of n to get the nth fibonacci number\n";
    cin>>x;
    switch(x){
    case 1: cout<<"The 1st fibonacci number = 0";
        break;
    default:
    cout<<"The "<<x<<"th fibonacci number = "<<fib(x);
    }
}