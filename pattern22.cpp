#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i+1;
        int num1=1;
        while(j){
            cout<<num1;
            num1=num1+1;
            j=j-1;
        }
        int star=2*(i-1);
        while(star){
            cout<<"*";
            star=star-1;
        }
        int k=n-i+1;
        int num2=k;
        while(k){
            cout<<num2;
            k=k-1;
            num2=num2-1;
        }
        cout<<endl;
        i=i+1;
    }
}