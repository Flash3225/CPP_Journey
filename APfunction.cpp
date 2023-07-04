#include<iostream>
using namespace std;

int AP(int n){
    return (3*n+7);
}

int main(){
    int x;
    cout<<"Enter the value of n to find the nth term\n";
    cin>>x;
    cout<<"\nThe value of "<<x<<"th term is = "<<AP(x);
    return 0;
}