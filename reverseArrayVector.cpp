#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> u){
    int s = 0, e = u.size()-1;
    while (s<=e)
    {
        swap(u[s], u[e]);
        s++;
        e--;
    }
    return u;
}

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main() {
    vector<int> v;

    v.push_back(12);
    v.push_back(7);
    v.push_back(11);
    v.push_back(5);
    v.push_back(4);
    v.push_back(9);

    cout<<"Before reverse: ";
    print(v);
    cout<<endl;
    vector<int> ans = reverse(v);
    cout<<"After reverse: ";
    print(ans);
    cout<<endl;

    return 0;
}