// RETURN BY REFERENCE 

#include <iostream>
using namespace std;

int & fun(int &x){
    cout<<x<<endl;
    cout<<&x<<endl;
    return x;
}

int main(){
    int a = 10;
    fun(a) = 20;
    cout<<a<<endl;
    cout<<&a<<endl;
    return 0;
}