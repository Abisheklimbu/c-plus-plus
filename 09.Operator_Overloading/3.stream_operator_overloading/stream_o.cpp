// Stream Operator Overloading 

#include <iostream>
using namespace std; 

class Complex{
private: 
    int real;
    int img;

public:
    Complex (int r=0, int i=0){
        real = r; 
        img = i;
    }

friend ostream & operator<<(ostream &out, Complex &c);
};

ostream & operator<<(ostream &out, Complex &c){
    out<<c.real<<"+i"<<c.img<<endl;
    return out;
}

int main(){

    Complex c1(20,20);
//  cout<<c1;

    operator<<(cout, c1);

    return 0;
}