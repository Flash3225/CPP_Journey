#include<iostream>
using namespace std;

//0-->not prime
//1-->prime

bool Prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int x;
    cin>>x;
    if(Prime(x)){
        cout<<"It is a prime number.";
    }
    else{
        cout<<"It is not a prime number.";
    }
}